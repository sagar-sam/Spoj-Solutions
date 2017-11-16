#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int j=1;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		if(n%2!=0)
		{
			printf("Case %d: %lld\n",j,n);
			j++;
		}
		else 
		{
			while(n%2==0)
			{
				n=n/2;
			}
			printf("Case %d: %lld\n",j,n);
			j++;
		}
	}
}
