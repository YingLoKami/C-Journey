#include <stdio.h>
int main()
{
	int n , a ,min;//总数，输入的数字，最小数字
	
	scanf("%d",&n);
	scanf("%d",&a);
	min = a;
	
	int i=1 ;
	
	while ( i<n )
	{
		scanf("%d",&a);
		if ( a <min )
		{ min = a ;}
		i++;
	}
	
	printf("%d",min);
	
	return 0;
}
