#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int ans=0;
		for(int i=1;i<=n/2;i++)
		{
			int a=n/i;
			ans=(ans+((i*a)%1000000007))%1000000007;
		}
		int i=n/2;
		ans=(ans+(((n*(n+1))/2)%1000000007)-(((i*(i+1))/2)%1000000007))%1000000007;
		printf("%d\n",ans);
	}
}
