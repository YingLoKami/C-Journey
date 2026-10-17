#include  <stdio.h>
int main()
{
    float F,C;
	printf("请输入华氏度：\n");
	scanf("%f", &F);
	C=(F-32)*5/9.0;
	
	printf("%.2f华氏度等于%.2f摄氏度",F,C);
	
	
	return 0;
}
