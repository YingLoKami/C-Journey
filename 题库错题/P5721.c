#include<stdio.h>
int main()
{
	int n = 1;//控制组
	int i = 0;//行
	scanf("%d",&n);
	int num = 1;
	
	while (i <= n)
	{
		int j = 1;
		while ( j <= n-i)	
		{
			printf("%02d",num);
			j++;
			num++;
		}
		printf("\n");
		i ++;
	}
	return 0;
}
