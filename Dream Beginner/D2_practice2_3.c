#include <stdio.h>
int main ()
{
	int a , b , c ;
	int n;
	scanf("%d", &n );
	
	a = n/100;
	b = (n/10)%10;
	c = n%10;
	
	printf("%d\n",100*c+10*b+a);
	
	return 0 ;
}
