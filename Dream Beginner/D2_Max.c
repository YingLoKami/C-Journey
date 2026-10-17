#include <stdio.h>
int main ()
{
	int a=0 , b=0 , c=0 ;
	scanf("%d %d %d", &a ,&b , &c );
	
	int max = a ;
	if(a<b)
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	printf("%d",max);

    return 0 ;
}
