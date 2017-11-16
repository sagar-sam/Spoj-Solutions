#include <iostream>
#include <stdio.h>

using namespace std;

int dp[100001]={0};

int ans(int x)
{
	if(x==0)
		return 0;
	else if(x==1)
		return 1;
	if(x%2!=0)
		return 0;
	else if(dp[x]!=0)
		return dp[x];
	else {
		int a,b;
		for(int i=1;i*i<=x;i++)
		{
			if(x%i==0)
			{
				a=i;
				b=x/i;
			}
		}
		dp[x]=ans(a)+ans(b);
		return dp[x];
	}
}

int main()
{
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	int x;
	scanf("%d",&x);
	if(x==1)
		printf("1\n");
	else if(x%2!=0)
	{
		dp[x]=0;
		printf("0\n");
	}
	else 
	{
		printf("%d\n",ans(x));
	}
}
