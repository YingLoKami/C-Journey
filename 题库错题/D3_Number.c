#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d",&a);
	
	if( a%2==0 &&( a>4 && a<=12))
	{
		printf("1 ");
	}
	else{printf("0 ");}
	
	//小A的整数
	
	if( a%2 != 0 && (a<=4  || a>12))
	{
		printf("0 ");
	}
	else {printf("1 ");}//Uim
	
	if( a%2 == 0 && (a<=4 || a>12))
	{
		printf("1 ");
	}
	else if( a%2!=0 && a>4 && a<=12)
	{printf("1 ");}
	else {printf("0 ");}//小B的需求
	
	if( a%2!=0 && (a<=4 || a>12))
	{
		printf("1 ");
	}
	else{printf("0\n");}
	
	return 0 ;
	
	
}
