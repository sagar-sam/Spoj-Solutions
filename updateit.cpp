#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,u;
		scanf("%d %d",&n,&u);
		vector<int> vec(n);
		for(int i=0;i<u;i++)
		{
			int l,r,val;
			scanf("%d%d%d",&l,&r,&val);
			vec[l]=vec[l]+val;
			vec[r+1]=vec[r+1]-val;
		}
		for(int i=1;i<n;i++)
			vec[i]=vec[i]+vec[i-1];
		int q;
		scanf("%d",&q);
		while(q--)
		{
			int ind;
			scanf("%d",&ind);
			printf("%d\n",vec[ind]);
		}
	}
	return 0;
}
