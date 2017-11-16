#include <iostream>
#include <stdio.h>
#include <climits>

using namespace std;

int dp[1001];

int cal(int n)
{
	if(n<0)
		return 0;
	if(dp[n]!=-1)
		return dp[n];
	else 
	{
		int ans=INT_MAX;
		for(int i=1;i*i<=n;i++)
		{
			int ca=cal(n-(i*i))+1;
			if(ca<ans)
				ans=ca;
		}
		dp[n]=ans;
		return dp[n];
	}
}

int main()
{
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	dp[3]=3;
	for(int i=4;i<=1001;i++)
		dp[i]=-1;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a;
		scanf("%d",&a);
		int ans=cal(a);
		printf("%d\n",ans);
	}
	return 0;
}
