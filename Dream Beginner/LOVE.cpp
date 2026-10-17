#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#ifdef _WIN32
#include <windows.h>
#endif
namespace {
	constexpr const char* kText  = "I LOVE U";   // 组成心形的文字（可自行修改）
	constexpr const char* kRed   = "\033[1;31m"; // ANSI 亮红
	constexpr const char* kReset = "\033[0m";    // ANSI 复位
// 心形饱满度：f = (x²+y²−1)³ − kFatten·x²y³ ≤ 0
//   0.6 → 瘦一点；1.0 → 经典心形（默认）；1.2 → 最饱满；再大顶部两瓣会变钝
	constexpr double kFatten = 1.0;
// 心形内部判定（y 轴朝上）
	inline bool insideHeart(double x, double y) {
		const double t = x * x + y * y - 1.0;
		return t * t * t - kFatten * x * x * y * y * y <= 0.0;
	}
// 细网格扫描真实包围盒，确保心形完整不被裁切
	struct Bounds {
		double xMin, xMax, yMin, yMax;
	};
	Bounds heartBounds() {
		constexpr int kSample = 1200;   // 网格分辨率
		constexpr double kRange = 1.6;  // 扫描范围 ±1.6
		const double step = 2.0 * kRange / kSample;
		Bounds b{0.0, 0.0, 0.0, 0.0};
		bool first = true;
		for (int j = 0; j <= kSample; ++j) {
			const double y = -kRange + j * step;
			for (int i = 0; i <= kSample; ++i) {
				const double x = -kRange + i * step;
				if (!insideHeart(x, y)) continue;
				if (first) {
					b = {x, x, y, y};
					first = false;
				} else {
					b.xMin = std::min(b.xMin, x);
					b.xMax = std::max(b.xMax, x);
					b.yMin = std::min(b.yMin, y);
					b.yMax = std::max(b.yMax, y);
				}
			}
		}
		if (first) b = {-1.0, 1.0, -1.0, 1.0};  // 兜底
		return b;
	}
#ifdef _WIN32
// 为 Windows 10+ 控制台打开 ANSI（VT）转义支持，并把输出代码页切到 UTF-8
	void enableVirtualTerminal() {
		SetConsoleOutputCP(CP_UTF8);
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		if (h != nullptr && h != INVALID_HANDLE_VALUE) {
			DWORD mode = 0;
			if (GetConsoleMode(h, &mode)) {
				SetConsoleMode(h, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
			}
		}
	}
	int terminalWidth() {
		CONSOLE_SCREEN_BUFFER_INFO info;
		if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info)) {
			return info.srWindow.Right - info.srWindow.Left + 1;
		}
		return 0;
	}
#else
	void enableVirtualTerminal() {}
	int terminalWidth() {
		const char* cols = std::getenv("COLUMNS");
		return cols != nullptr ? std::atoi(cols) : 0;
	}
#endif
}  // namespace
int main(int argc, char** argv) {
	enableVirtualTerminal();
	// ---------------------------- 参数 ----------------------------
	const int rows0 = (argc > 1) ? std::max(8, std::atoi(argv[1])) : 30;  // 心形高度（行数）
	constexpr double kCharH = 2.0;   // 字符高宽比：1 行的高度 = 2 个字符宽
	// （调小 → 爱心更宽更胖，如 1.8）
	constexpr int    kPadX  = 2;     // 心形左右各留几个字符的余量
	constexpr int    kTopMargin = 1; // 顶部留白行数
	const Bounds box = heartBounds();
	// 行数决定行高（unit），列宽 = unit * kCharH；两者锁定宽高比，心形不变形
	auto colsForRows = [&](int rows) {
		const double u = (box.yMax - box.yMin) / (rows * kCharH);
		const double left = box.xMin - kPadX * u;
		const double right = box.xMax + kPadX * u;
		return static_cast<int>((right - left) / (u * kCharH)) + 1;
	};
	// 自适应放大：终端还有富余空间时，增加行数把爱心画得更大、更饱满
	// （保持同一宽高比，只是整体放大；只放大不缩小）
	// 高度上限 kMaxRows：避免把整个终端铺满
	constexpr int kMaxRows = 44;
	const int termW = terminalWidth();
	int rows = rows0;
	int cols = colsForRows(rows);
	if (termW > 0) {
		for (int cand = rows0 + 1; cand <= kMaxRows; ++cand) {
			const int candCols = colsForRows(cand);
			if (candCols > termW - 1) break;    // 宽度放不下，停止放大
			rows = cand;
			cols = candCols;
		}
	}
	const double unit = (box.yMax - box.yMin) / (rows * kCharH);  // 1 像素的坐标长度
	const double dCol = unit * kCharH;                            // 横向步长
	const double xLeft = box.xMin - kPadX * unit;                 // 画布左边界
	const int leftPad = (termW > cols) ? (termW - cols) / 2 : 0;
	const std::string text(kText);
	const int textLen = static_cast<int>(text.size());
	// ------------------------- 逐行填满 -------------------------
	std::vector<std::string> image;
	image.reserve(static_cast<std::size_t>(rows));
	int charIndex = 0;   // 全局连续计数：让 "I LOVE U" 连贯地铺满整颗心
	for (int r = 0; r < rows; ++r) {
		const double y = box.yMax - (r + 0.5) * unit * kCharH;   // 行中心（自上而下）
		std::string line;
		line.reserve(static_cast<std::size_t>(cols));
		for (int c = 0; c < cols; ++c) {                          // 整行逐格填满
			const double x = xLeft + (c + 0.5) * dCol;
			if (insideHeart(x, y)) {
				line.push_back(text[charIndex % textLen]);
				++charIndex;
			} else {
				line.push_back(' ');
			}
		}
		image.push_back(std::move(line));
	}
	// ------------------------- 输出（整块亮红） -------------------------
	const std::string pad(static_cast<std::size_t>(leftPad), ' ');
	std::cout << kRed;
	for (int i = 0; i < kTopMargin; ++i) std::cout << '\n';
	for (const std::string& row : image) {
		std::cout << pad << row << '\n';
	}
	std::cout << kReset;
	return 0;
}
