#include <iostream>
#include <stdio.h>

using namespace std;

long long int dp[1000000]={0};

long long int sol(long long int n)
{
	if(n==0)
		return 1;
	else if(n<2)
		return 0;
	else if(dp[n]!=0)
		return dp[n];
	else {
		for(int i=4;i<=n;i++)
			if(dp[i]==0)
				dp[i]=(dp[i-2]+dp[i-3])%1000000007;
		return dp[n];
	}
}

int main()
{
	dp[0]=dp[1]=0;
	dp[2]=dp[3]=1;
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		printf("%lld\n",sol(n));
	}
}
