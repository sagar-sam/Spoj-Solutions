#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,ans;
		scanf("%lld",&n);
		if(n==1)
			printf("0\n");
		else 
		{
			ans=1;
			long long int i=0;
			while(ans<=n)
			{
				i++;
				ans=ans+i;
			}
			i--;
			printf("%lld\n",i);
		}
	}
}
