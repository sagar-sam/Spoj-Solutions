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
		long long int ans=0;
		long long int sum=0;
		long long int a;
		scanf("%lld",&a);
		sum=sum+a;
		for(long long int i=1;i<n;i++)
		{
			scanf("%lld",&a);
			ans=ans+i*a-sum;
			sum=sum+a;
		}
		printf("%lld\n",ans);
	}
}
