#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int ansa=1;
		for(int i=0;i<n-1;i++)
			ansa*=2;
		long long int ansb=ansa;
		ansb+=(n-1)*ansa/2;
		printf("%lld %lld\n",ansa,ansb);
	}
}
