#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

long long int bs(vector<long long int> vec,long long int s,long long int l,long long int n1,long long int n2)
{
	int start=0;
	int last=l;
	int res=-1;
	int mid;
	while(start<=last)
	{
		mid=(start+last)/2;
		if(vec[mid]==s)
		{
			if(mid!=n1)
			{
				if(mid!=n2)
				{
					res=mid;
					break;
				}
			}
			start=mid+1;
		}
		else if(vec[mid]>s)
			last=mid-1;
		else if(vec[mid]<s)
			start=mid+1;
	}
	return res;
}

int main()
{
	int t;
	scanf(" %d",&t);
	while(t--)
	{
		long long int n;
		scanf(" %lld",&n);
		vector<long long int> vec(n);
		for(long long int i=0;i<n;i++)
		{
			scanf(" %lld",&vec[i]);
		}
		long long int p;
		scanf("%lld",&p);
		sort(vec.begin(),vec.end());
		int flag=0;
		for(long long int i=0;i<n;i++)
		{
			for(long long int j=i+1;j<n;j++)
			{
				long long int s=p-vec[i]-vec[j];
				if(s>0)
				{
					long long int f=bs(vec,s,n-1,i,j);
					if(f!=-1)
					{
						flag=1;
						break;
					}
				}
			}
		}
		if(flag==1)
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
