#include<stdio.h>
int main()
{
	int n = 2;
	
	int count = 1;
	while( count<=50 )
	{
		int a = 2; 
		int isPrime = 1;
		for(;a<n ;a++ ){
			if( n%a ==0 ){
				isPrime =0;
				break;
			}
			}
		if( isPrime == 1 )
		{
			printf("%d ",n);
			count++;
		}
		n++;
	}
	return 0;
}

