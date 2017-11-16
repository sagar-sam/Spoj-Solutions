#include <iostream>
#include <stdio.h>

using namespace std;

int sol(int x1,int y1,int x2,int y2)
{
	if(x1==x2 && y1==y2)
		return 1;
	int ans=0;
	if(x1<x2)
	{
		ans+=sol(x1+1,y1,x2,y2);
		ans;
	}
	if(y1<y2)
	{
		ans+=sol(x1,y1+1,x2,y2);
		ans;
	}
	return ans;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int r,c;
		scanf("%d %d",&r,&c);
		printf("%d\n",sol(1,1,r,c));
	}
}
