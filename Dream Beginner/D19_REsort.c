#include <stdio.h>
int main()
{
	int i;
	int j=0;//作为第二个计数器 
	int a[6] = {5, 2, 9, 1, 7, 3};
	for(j=0;j<6;j++)
	{
		int min=j;
		for(i=j+1;i<6;i++){
			if(a[i]<a[min]){
				min = i;
			}
		}
		int  t=a[j];
		a[j] = a[min];
		a[min] = t;
	}
	for(int cnt=0;cnt<6;cnt++){
		printf("%d ",a[cnt]);
	}
	
	return 0;
}
