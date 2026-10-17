#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double sum = 0;
	int sign = 1;//设置一个用作判断正负号的值
	
	for(int i=1; i<=n ;i++){
		sum += sign*(1.0/i) ;
		sign = -sign;//变为相反数
	}
	
	printf("f(n)=%f\n",sum);
	return 0;
}
