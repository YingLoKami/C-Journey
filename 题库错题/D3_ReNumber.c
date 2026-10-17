#include <stdio.h>
int main()
{
	int a = 0 ;
	scanf("%d",&a);
	
	int A =( a%2 == 0);
	int B =( a>4 && a<=12);
	
	printf("%d %d %d %d\n",A&&B,A||B,A!=B,A==0&&B==0);
	
	return 0 ;
}
