#include <stdio.h>
int main()
{
	int a ;
	scanf("%d",&a);
	
	while( a != 1)
	{
		if( a%2 == 1)
		{
			a =3*a+1;
			printf("%d ,a");
		}else{
			a /=2;
		}
		
	}
	
	return 0;
}
