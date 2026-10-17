#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, d, e ,f;//引入坐标
	double d1, d2, d3;
	
	scanf("%lf %lf %lf %lf %lf %lf",&a ,&b ,&c ,&d ,&e ,&f);
	
	d1=sqrt((c-a)*(c-a)+(d-b)*(d-b));
	d2=sqrt((c-e)*(c-e)+(d-f)*(d-f));
	d3=sqrt((e-a)*(e-a)+(f-b)*(f-b));
	
	double C =d1+d2+d3 ;
	printf("%.2lf\n",C);
	
	return 0;
}
