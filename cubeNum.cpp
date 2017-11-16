#include <iostream>
#include <stdio.h>
#include <climits>

long long int dp[100000]={-1};

int solve(int n)
{
	if(n<=0)
		return 0;
	if(dp[n]!=0)
		return dp[n];
	int min=INT_MAX;
	for(int i=1;i*i*i<=n;i++)
	{
		int a=1+solve(n-i*i*i);
		if(a<min)
			min=a;
	}
	dp[n]=min;
	return dp[n];
}

int main()
{
	int n;
	int i=1;
	while(scanf("%d",&n)!=EOF)
	{
		if(dp[n]==0)
			solve(n);
		printf("Case #%d: %lld\n",i,dp[n]);
		i++;
	}
}