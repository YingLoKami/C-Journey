#include<stdio.h>
int main()
{
	int n=1;
	scanf("%d",&n);
	
	int num;
	
	int min=1;//设定最小边界
	int max=1;//设定最大边界
	
	for(int i=1;i < n;i++){
		min *= 10;
	}
	for(int i=0;i < n;i++){
		max *= 10;
	}
	max--;
	num=min;
	
	while( num<=max ){
		
		int tempt =num;
		int sum=0;
		while( tempt >0 ){
			int wei =0;
			wei = tempt%10;
			tempt /=10;
			
			int power=1;
			int count=0;
			while(count !=n ){
				power *=wei;
				count++;
			}
			sum +=power;
		}
		
		if( num == sum){
			printf("%d\n",num);
		}
		num++;
	}//用if语句判断 成立则计为found变量，printf found需要嵌套在循环语句内部
	
	return 0;
}
