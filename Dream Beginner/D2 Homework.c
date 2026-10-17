#include <stdio.h>
int main ()
{
	int hight;
	
	printf("请输入身高：（cm)");
	scanf("%d",&hight);
	
	int totalinch = hight/2.54;
	int foot = totalinch/12;
	int inch = totalinch%12;
	
	printf("%d %d\n",foot,inch);
	
	return 0 ;
}
