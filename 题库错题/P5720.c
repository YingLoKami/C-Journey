#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d",&a);
	
	int i = 1;//设定计时器
	
	while( a!=1 )
	{
		i++;
		a /= 2;
	}
	printf("%d",i);
	
	return 0;
}
