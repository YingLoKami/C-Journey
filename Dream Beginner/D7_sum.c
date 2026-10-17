#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double sum = 0;
	int sign = 1;
	
	for(int i=1; i<=n ;i++){
		sum += sign*(1.0/i) ;
		sign = -sign;
	}
	
	printf("f(n)=%f\n",sum);
	return 0;
}
