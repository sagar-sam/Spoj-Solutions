#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int ans=0;
		long long int n;
		long long int sum=0;
		scanf("%lld",&n);
		for(int i=0;i<n;i++)
		{
			long long int a;
			scanf("%lld",&a);
			sum=sum+a;
			if(sum<=ans)
				ans=sum-1;
		}
		printf("%lld\n",-ans);
	}
}