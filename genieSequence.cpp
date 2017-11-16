#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		map<int,int> mp;
		int n;
		scanf("%d",&n);
		int a;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			mp[a]++;
		}
		int flag=0;
		if(n%2==0)
		{
			for(int i=0;i<n/2;i++)
			{
				if(i==0)
				{
					if(mp[n-1]!=2)	
					{
						flag=1;
						break;
					}
				}
				else
				{
					if(mp[i]==2 && mp[n-i-1]==0)
					{
						flag=0;
					}
					else if(mp[i]==1 && mp[n-i-1]==1)
					{
						flag=0;
					}
					else if(mp[i]==0 && mp[n-i-1]==2)
					{
						flag=0;
					}
					else 
					{
						flag=1;
						break;
					}
				}
			}
		}
		else
		{
			for(int i=0;i<=n/2;i++)
			{
				if(i==0)
				{
					if(mp[n-1]!=2)
					{
						flag=1;
						break;
					}
				}
				else
				{
					if(mp[i]==2 && mp[n-i-1]==0)
						flag=0;
					else if(mp[i]==1 && mp[n-i-1]==1)
						flag=0;
					else if(mp[i]==0 && mp[n-i-1]==2)
						flag=0;
					else
					{
						flag=1;
						break;
					}
				}
			}
		}
		if(flag==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
