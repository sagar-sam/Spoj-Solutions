#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string s;
		cin>>s;
		int flag=0;
		int k=0,e=0,ans=0;
		int lask=0,lase=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='K')
			{
					k++;
			}
		}
		int kn=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='K')
			{
				kn++;
			}
			else if(s[i]=='E')
			{
				ans+=(kn*(k-kn));
			}
		}
		printf("%d\n",ans);
	}
}
