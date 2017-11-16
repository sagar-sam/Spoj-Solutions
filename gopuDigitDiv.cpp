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
		long long int sum=0;
		long long int m=n;
		for(int i=1;i<=n;i=i*10)
		{
			sum=sum+m%10;
			m=m/10;
		}
		while(true)
		{
			if(n%sum==0)
				break;
			else 
			{
				if(n%10==0)
				{
					long long int m=n;
					while(m%10==9)
					{
						sum=sum-9;
						m=m/10;
					}
				}
				n++;
				sum++;
			}
		}
		printf("%lld\n",n);
	}
	return 0;
}
