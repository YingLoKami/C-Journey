#include <stdio.h>
int main()
{
	int t1,t2;
	scanf("%d %d",&t1,&t2);
	
	int hour1 = t1/100;
	int minute1 = t1%100;
	
	int t3 = hour1*60+minute1+t2;
	int hour3 = t3/60;
	int minute3 = t3%60;
	
	printf("%02d%02d\n",hour3,minute3);
	
	return 0 ;
}
