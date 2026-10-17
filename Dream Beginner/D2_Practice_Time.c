#include <stdio.h>
int main()
{
	int t1,t2;
	scanf("%d %d",&t1,&t2);
	
	int hour1 = t1/100;
	int minute1 = t1%100;
	
	int hour2 = t2/60;
	int minute2 =t2%60;
	
	int t3 = (hour1+hour2)*60+minute1+minute2;
	int hour3 = t3/60;
	int minute3 = t3%60;
	
	printf("%d\n",hour3*100+minute3);
	
	return 0 ;
}
