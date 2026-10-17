#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d",&a);
	
	if( a<=1 ){
		printf("Today,I ate %d apple.\n",a);
	}else if( a>1 ){
		printf("Today,I ate %d apples.\n",a);
	}
	
	return 0;
}
