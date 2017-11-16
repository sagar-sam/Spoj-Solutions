#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long int n;
	scanf("%lld",&n);
	for(long long int i=0;i<n;i++)
	{
		long long int a;
		scanf("%lld",&a);
		if(a%2==0)
		{
			long long int ans=0;
			while(a)
			{
				long long int b=a&1;
				ans=(ans*2)+b;
				a=a/2;
			}
			printf("%lld\n",ans);
		}
		else 
		{
			printf("%lld\n",a);
		}
	}
	return 0;
}
