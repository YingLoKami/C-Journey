#include <stdio.h>
int main()
{
	int a[8] = {3, 17, 9, 22, 5, 22, 1, 8};	
	int max = a[0];
	int cnt = 0;//定义下标
	for(int i=1;i<8;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
			cnt = i;
		}
	}
	printf("Max = %d\n",max);
	printf("下标为%d，是 第%d个数\n",cnt,cnt+1);
	return 0;
}
