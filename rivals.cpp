#include <iostream>
#include <stdio.h>

using namespace std;

int solve(int cx,int cy,int x,int y)
{
	if(cx==x && cy==y)
		return 1;
	int ans=0;
	if(cx<x)
		ans=(ans+solve(cx+1,cy,x,y))%1000000007;
	if(cy<y)
		ans=(ans+solve(cx,cy+1,x,y))%1000000007;
	return ans;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int ans=solve(0,0,x,y);
		printf("%d\n",ans);
	}
	return 0;
}
