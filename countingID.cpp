#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long int n,l;
	scanf("%lld%lld",&n,&l);
	while(n!=0 || l!=0)
	{
		long long int ans=0;
		long long int mul=n;
		for(int i=1;i<=l;i++)
		{
			ans=(ans+mul)%1000000007;
			mul=(mul*n)%1000000007;
		}
		printf("%lld\n",ans);
		scanf("%lld%lld",&n,&l);
	}
}