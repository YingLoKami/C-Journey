#include <stdio.h>
int main(void)
{
	int count[9];
	int i;
	for(i=0;i<=9;i++){
		scanf("%d",&count[i]);
	}
	
	int hight;
	scanf("%d",&hight);
	
	int cnt = 0;
	for(i=0 ;i<=9 ;i++){
		if(count[i] <= hight+30){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
