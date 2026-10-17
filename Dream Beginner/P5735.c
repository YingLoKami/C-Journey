#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, d, e ,f;//引入坐标
	double d1, d2, d3;
	
	scanf("%d %d\n%d %d\n%d %d",&a ,&b ,&c ,&d ,&e ,&f);
	
	d1=sqrt((c-a)*(c-a)+(d-b)*(d-b));
	d2=sqrt((c-e)*(c-e)+(d-f)*(d-f));
	d3=sqrt((e-a)*(e-a)+(f-b)*(f-b));
	
	double C =d1+d2+d3 ;
	printf("%.2lf",C);
	
	return 0;
}
