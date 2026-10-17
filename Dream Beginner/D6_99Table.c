#include <stdio.h>
int main()
{
	int i=1;//设置列
	
	while ( i <= 9 )
	{
		int j = 1;//设置行
		while ( j<=i )
		{
			printf("%d*%d= %-2d ",i ,j ,i*j );
			j++;
		}

		i++;
		printf("\n");
	}
	return 0;
}
