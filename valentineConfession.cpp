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
		int n;
		scanf("%d",&n);
		vector<long long int> vec(n);
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&vec[i]);
			sum=sum+vec[i];
		}
		int flag=0;
		if(sum==0)
		{
			flag=0;
		}
		else if(sum%(n-1)!=0)
		{
			flag=1;
		}
		else
		{
			sum=sum/(n-1);
			for(int i=0;i<n;i++)
			{
				if(sum-vec[i]!=0  && sum-vec[i]!=1)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
			printf("-1\n");
		else 
			printf("%lld\n",sum);
	}
}
