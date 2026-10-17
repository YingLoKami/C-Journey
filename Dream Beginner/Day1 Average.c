#include <stdio.h>

int main()
{
	float a , b , c ;
	
	printf("请输入三个数字：\n");
	
	scanf("%f %f %f", &a , &b , &c );
	
	printf("这三个数的平均值为%.3f\n",(a+b+c)/3.0);
	
	return 0;
}
