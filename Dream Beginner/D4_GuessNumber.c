#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
	int count=0 ,a=0 ;
	srand(time(0));
	
	int number = rand()%100+1;
	
	do{
		printf("请输入一个数字\n");
		scanf("%d",&a);
		count++;
		if(a>number)
		{
			printf("杂鱼就是杂鱼呢，猜的数字都那么大了~\n");
		}else if(a<number)
		{
			printf("杂鱼杂鱼，数字和你的**一样小呢~\n");
		}
	}while(a != number);
    
	printf("哦齁齁齁齁齁！居然用了%d次就让我去了吗\n",count);
	
    return 0 ;
}
