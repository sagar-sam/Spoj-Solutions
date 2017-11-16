#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		int ch=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]!='9')
				ch=1;
		}
		if(ch==0)
		{
			for(int i=0;i<=n;i++)
			{
				if(i==0 || i==n)
					printf("1");
				else printf("0");
			}
			printf("\n");
			continue;
		}
		int st;
		if(n%2==0)
			st=n/2-1;
		else 
			st=n/2;
		int las;
		if(n%2==0)
			las=n/2;
		else
			las=n/2;
		int flag=0;
		int flag9=0;
		while(st>=0)
		{
			if(st==las)
			{
				int cn=0;
				for(int j=st-1;j>=0;j--)
				{
					if(s[j]>s[n-1-j])
					{
						cn=1;
						break;
					}
				}
				if(cn==0)
				{
					if(s[st]!='9')
					{
						s[st]=s[st]+1;
						flag=1;
					}
					else 
					{
						s[st]='0';
						flag9=1;
					}
				}
			}
			else if(s[st]!=s[las])
			{
				if(flag==0)
				{
					flag=1;
					if(s[st]>s[las])
						s[las]=s[st];
					else 
					{
						s[st]=s[st]+1;
						s[las]=s[st];
					}
				}
				else 
				{
					s[las]=s[st];
				}
			}
			else if(flag==0)
			{
				int ck=0;
				for(int i=st-1;i>=0;i--)
				{
					if(s[i]>s[n-1-i])
					{
						ck=1;
						break;
					}
				}
				if(ck==0)
				{
					if(s[st]!='9')
					{
						s[st]=s[st]+1;
						s[las]=s[st];
						flag=1;
					}
					else{
						s[st]='0';
						s[las]='0';
					}
				}
			}
			st--;
			las++;
		}
		if(flag==0)
		{
			if(n%2!=0)
			{
				s[n/2]=s[n/2]+1;
			}
			else 
			{
				s[n/2]=s[n/2]+1;
				s[n/2-1]=s[n/2];
			}
		}
		cout<<s<<"\n";
	}
	return 0;
}
