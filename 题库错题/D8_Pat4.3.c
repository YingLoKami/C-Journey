#include<stdio.h>
int main()
{
	int M = 0, N = 0;
	scanf("%d %d",&M ,&N );
	
	int num = 0;
	num = M;
	int cnt=0,sum = 0;//计数器

	
	for(; num<=N ; num++ )
	{
		    int isPrime =1;
		if( num<=1 )
		{
			continue;
		}//排除1
	 
		for( int n=2 ; n < num;  n++ )
		{
			if( num%n ==0 )
			{
				isPrime=0;
				break;
			}
		}
		
		if( isPrime == 1 ){
			cnt++ ;
			sum += num ;
		}
	}	
	
	printf("%d %d",cnt ,sum );
	
	return 0;
}
