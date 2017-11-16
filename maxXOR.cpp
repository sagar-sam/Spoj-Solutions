#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long int l,r;
	scanf("%lld %lld",&l,&r);
	long long int bits=0;
	long long int n=1;
	while(n<=r)
	{
		bits++;
		n=n*2;
	}
	n=n/2;
	if(n!=l)
	{
		long long int ans=n^(n-1);
		printf("%lld\n",ans);
	}
	else 
	{
		long long int ans=r^(r-1);
		printf("%lld\n",ans);
	}
}
