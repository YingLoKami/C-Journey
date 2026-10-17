#include <stdio.h>
#include <math.h>
double distance(double x1 ,double x2 ,double y1 ,double y2 );//声明

int main()
{
	double x1,x2,y1,y2 ,x3 ,y3;
	scanf("%lf %lf %lf %lf %lf %lf",&x1 ,&y1 ,&x2 ,&y2 ,&x3 ,&y3 );
	double x = distance(x1 ,y1 ,x2 ,y2);
	double y = distance(x2 ,y2 ,x3 ,y3);
	double z = distance(x1 ,y1 ,x3 ,y3);
	
	printf("%.2f",x+y+z);
	return 0;
}

double distance(double x1 ,double y1 ,double x2 ,double y2 )
{
	double ret;//此处原本有个错误，ret用int进行定义了
	ret =sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	
	return ret;
}



