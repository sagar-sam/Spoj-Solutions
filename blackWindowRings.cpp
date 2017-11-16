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
		vector< pair<int,int> > vec;
		int n;
		scanf("%d",&n);
		int maxin=0;
		int maxout=0;
		for(int i=0;i<n;i++)
		{
			int a,b;
			scanf("%d %d",&a,&b);
			vec.push_back(pair<int,int>(a,b));
		}
		int ind;
		for(int i=0;i<n;i++)
		{
			if(vec[i].first>maxin)
			{
				maxin=vec[i].first;
				ind=i+1;
			}
		}
		int flag=0;
		for(int i=0;i<n;i++)
		{
			if(vec[i].second>=maxin)
			{
				if(i!=(ind-1))
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
			printf("%d\n",ind);
		else 
			printf("-1\n");
	}
	return 0;
}