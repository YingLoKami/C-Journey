#include <stdio.h>
int main()
{
	int sum = 0,count = 0;
	int num = 0;
	do{
		printf("这是第%d个数字，请输入正整数\n",count+1);
		scanf("%d", &num );
		if( num >=0 )
		{
			sum += num;
			count++;	
	     }
	}
		while( num>0 );
	printf("这%d个数字的平均数为%.2f\n",count,(float)sum/count);
	
	return 0 ;
}
