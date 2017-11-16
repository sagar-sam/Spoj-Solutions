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
		int n,k;
		scanf("%d%d",&n,&k);
		string s;
		cin>>s;
		map<string,int> mp;
		string se="";
		int count=0;
		for(int i=0;i<n;i++)
		{
			se=se+s[i];
			if(i%k==k-1)
			{
				if(mp[se]==0)
				{
					count++;
					mp[se]=1;
				}
				se="";
			}
		}
		printf("%d\n",count);
	}
}