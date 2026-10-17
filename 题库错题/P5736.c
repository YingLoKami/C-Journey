#include <stdio.h>
int is_Prime(int found);//声明
int main()
{
	int num;
	scanf("%d",&num);
	for(int cnt=0 ;cnt<num ;)
	{
		int x;
		scanf("%d",&x);
		if(is_Prime(x)){
			printf("%d ",x);
		}
		cnt++;
	}
	return 0;
}

int is_Prime(int found)
{
	if( found ==1){
		return 0;
	}else
	{
		for(int n=2;n<found;n++)
		{
		if( found%n ==0){
			return 0;
		}
		}
		return 1;
	}
}
