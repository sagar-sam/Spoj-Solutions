#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	int x=1;
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		vector<long long int> vec(n);
		for(long long int i=0;i<n;i++)
		{
			scanf("%lld",&vec[i]);
		}
		bool allzeroes;
		long long int sum=0;
		do
		{
			allzeroes=true;
			long long int count[2]={0};
			for(long long int i=0;i<n;i++)
			{
				count[vec[i]&1]++;
				vec[i] >>= 1;
				if(vec[i])
					allzeroes=false;
			}
			sum = (sum+((count[0]*count[1])%10000007))%10000007;
		}while(!allzeroes);
		sum=(2*sum)%10000007;
		printf("Case %d: %lld\n",x,sum);
		x++;
	}
}
