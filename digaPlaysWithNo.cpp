#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		string s;
		cin>>s;
		int *ispresent=new int[n];
		int x=n-k;
		int pos1=-1;
		int pos0=-1;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
			{
				pos0=i;
				break;
			}
		}
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1')
			{
				pos1=i;
				break;
			}
		}
		for(int i=0;i<x;i++)
		{
			if(i%2!=0)
			{
				if(pos0==-1)
					pos0++;
				int j=pos0;
				while(j<s.length() && s[j]!='0')
				{
					j++;
				}
				pos0=j;
				if(pos0==s.length())
				{
					ispresent[pos1++]=1;
				}
				else 
				{
					ispresent[pos0++]=1;
				}
			}
			if(i%2==0)
			{
				if(pos1==-1)
					pos1++;
				int j=pos1;
				while(j<s.length() && s[j]!='1')
				{
					j++;
				}
				pos1=j;
				if(pos1==s.length())
				{
					ispresent[pos0++]=1;
				}
				else 
				{
					ispresent[pos1++]=1;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			if(ispresent[i]==0)
				printf("%c",s[i]);
		}
		printf("\n");
	}
	return 0;
}
