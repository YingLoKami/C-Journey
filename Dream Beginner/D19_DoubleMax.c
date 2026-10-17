#include<stdio.h>
int main(void)
{
	int a[2][3] = {
		{5, 12, 7},
		{9, 3, 20}
	};
	
	int max = a[0][0];
	printf("max0=%d\n",max);
	int i = 0;//行
	int j = 0;//列
	int maxi =0;
	int maxj =0;
	for(;i<2;i++){
		for(j=0;j<3;j++){
			if( a[i][j]>=max ){
				max=a[i][j];
				maxi=i;
				maxj=j;
			}
		}
	}
	
	printf("Max=%d\n",max);
	printf("最大值在%d行%d列",maxi+1,maxj+1);
	
	return 0;
}
