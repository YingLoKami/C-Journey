#include <stdio.h>
int main ()
{
	int price = 0;
	int bill = 0;
	
	printf("请输入票面\n");
	scanf("%d", &bill);
	printf("请输入金额\n");
	scanf("%d", &price);
	
	if(price<=bill)
	{
		printf("找您%d元",bill-price);
	}
	else
	{
		printf("你的钱不够\n");
	}
	
	return 0 ;
}
