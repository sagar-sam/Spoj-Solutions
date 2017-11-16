#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int x,avg;
		scanf("%lld%lld",&x,&avg);
		long long int n=avg-x+1;
		if(n==1)
			printf("0\n");
		else 
		{
			long long int sum=n*avg-x;
			n--;
			long long int k=sum-(n*(n-1))/2;
			printf("%lld\n",k);
		}
	}
}
