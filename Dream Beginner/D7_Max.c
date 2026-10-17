#include <stdio.h>
int main()
{
	int a ,b ;
	scanf("%d %d",&a ,&b );
	
	while( b!=0 ){
		int c=a%b;
		a = b;
		b = c;
	}
    printf("%d",a);
	
	return 0;
}
