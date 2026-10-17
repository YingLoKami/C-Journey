#include <stdio.h>
int main()
{
	int x , num , ans ;
	scanf("%d",&x);
	while( x > 0)
	{
		num = x%10;
		x /= 10;
		ans = ans*10 +num;//123 num=3 x=12
	}
	printf("%d",ans);
	
	return 0 ;
}
