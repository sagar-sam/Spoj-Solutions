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
		long long int n;
		scanf("%lld",&n);
		vector<long long int> vec(n);
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&vec[i]);
			sum+=vec[i];
		}
		int flag=0;
		for(int i=0;i<n-1;i++)
		{
			if(vec[i]>vec[i+1])
			{
				flag=1;
				break;
			}
			else 
			{
				vec[i+1]-=vec[i];
			}
		}
		if(vec[n-1]!=0)
		{
			flag=1;
		}
		(flag==0)?printf("YES\n"):printf("NO\n");
	}
}
