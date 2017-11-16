#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int key;
		scanf("%d",&key);
		string s;
		cin>>s;
		int flag=0;
		if(key>=26)
		{
			flag=1;
			key=key-26;
		}
		int j=s.length();
		for(int i=0;i<j;i++)
		{
			if(s[i]=='.')
				s[i]=' ';
			else if(s[i]<='z' && s[i]>='a')
			{
				if(s[i]+key>127)
					s[i]=s[i]+(key-26);
				else 
					s[i]=s[i]+key;
				if(s[i]>'z')
					s[i]=s[i]-26;
				if(flag==1)
				{
					s[i]=s[i]-32;
				}
			}
			else if(s[i]<='Z' && s[i]>='A')
			{
				s[i]=s[i]+key;
				if(s[i]>'Z')
					s[i]=s[i]-26;
				if(flag==1)
				{
					s[i]=s[i]+32;
				}
			}
		}
		cout<<s;
		printf("\n");
	}
	return 0;
}
