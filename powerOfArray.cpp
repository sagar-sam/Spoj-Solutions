#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		vector<long long int> vec(n);
		for(long long int i=0;i<n;i++)
		{
			scanf("%lld",&vec[i]);
		}
		sort(vec.begin(),vec.end());
		long long int ans=0;
		for(long long int i=0;i<n;i++)
		{
			if(vec[i]==vec[i+1])
			{
				long long int count=1;
				while(i<n-1 && vec[i]==vec[i+1])
				{
					i++;
					count++;
				}
				ans=ans+count*(i+1);
			}
			else ans=ans+i+1;
		}
		printf("%lld\n",ans);
	}
}
