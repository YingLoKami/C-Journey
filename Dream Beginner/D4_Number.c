#include <stdio.h>
int main()
{
	int n = 0;
	int x = 0;
	
	scanf("%d",&x);
	
	n++;
	x /= 10;//此处是为了处理0这一特例，如果删去0的输出结果会是0
	
	while(x!=0)
	{
		x/=10 ;
		n++;
	}
	
	printf("%d",n);
	return 0 ;
}
