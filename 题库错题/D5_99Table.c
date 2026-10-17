#include <stdio.h>
int main()
{
	int i = 1 ;//设置横向数字//设置纵向数字
	
	while( i <= 9 )
	{
		int j = 1;//重置第二位数，使得有一一得一二二得二
		while ( j<=i  )
		{
			printf(" %d * %d = %-2d  ",i,j,i*j);
			j++;
		}
		i++;
		printf("\n");//换行
	}
	return 0 ;
}
