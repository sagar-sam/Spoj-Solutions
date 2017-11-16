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
		long long int ans;
		float check;
		scanf("%lld",&n);
		if(n%2==0)
		{
			ans=(n*n)/48;
			check=(float)(n*n)/(float)(48);
			//printf("%f",check);
			if(check-ans>ans+1-check)
			{
				ans=ans+1;
			}
		}
		else 
		{
			ans=((n+3)*(n+3))/48;
			check=(float)((n+3)*(n+3))/(float)(48);
			if(check-ans>ans+1-check)
			{
				ans=ans+1;
			}
		}
		printf("%lld\n",ans);
	}
}
