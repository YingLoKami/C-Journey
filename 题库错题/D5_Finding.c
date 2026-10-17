#include<stdio.h>
int main()
{
	int n = 0;
	while( n != 10000)
	{
		int a = 0 ,Ta = 0;//设置小数与找到的结果
		int b = 0 ,Tb = 0;//设置大数与找到的结果
		
	    while( a*a <= n+100)
		{
			if( a*a == n+100 )
			{
				Ta =1;
				break;
			}
			a++;
		}
		
		 while( b*b <= n+156)
		 {
			 if( b*b == n+156 )
			 {
				 Tb =1;
				 break;
			 }
			 b++;
		 }
		
		if( Ta == 1 && Tb == 1 )
		{
			printf("%d\n", n );
		}
		n++;
	}
	return 0 ;
}
