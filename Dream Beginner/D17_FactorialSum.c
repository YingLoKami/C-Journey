#include <stdio.h>
int Factorial(int x);
int main()
{
	int N = 1;
	scanf("%d",&N);
	
	int Nfsum=0;
    for(;N>=1;N--){
		Nfsum +=Factorial(N);
	}
	
	printf("%d",Nfsum);
	return 0;
}

int Factorial(int x)
{
	if (x==0)
	{
		return 1;
	}
	else if(x>=1){
		int sum=1;
		for(; x!=1; x--){
			sum = sum*x;
		}
		return sum;
	}
	else {
		return 0;
	}
}
