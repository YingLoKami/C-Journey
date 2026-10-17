#include<stdio.h>
int main()
{
	int a[3][4] = {
		{1,  2,  3,  4},
		{5,  6,  7,  8},
		{9, 10, 11, 12}
	};
	
	int i,j;
	for(i=0;i<3;i++){
		int sum =0;
		for(j=0;j<4;j++){
			sum +=a[i][j];
		}
		printf("第%d行的和为%d\n",i+1,sum);
	}
	
	for(j=0;j<4;j++){
		int sum =0;
		for(i=0;i<3;i++){
			sum +=a[i][j];
		}
		printf("第%d列的和为%d\n",j+1,sum);
	}
	
	return 0;
}
