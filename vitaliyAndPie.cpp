#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int ans=0;
		int sm[26];
		for(int i=0;i<26;i++)
			sm[i]=0;
		int n;
		scanf("%d",&n);
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(i%2==0)
			{
				//printf("%d",s[i]);
				sm[s[i]-'a']++;
			}
			else {
				if(sm[s[i]-'A']==0)
					ans++;
				else sm[s[i]-'A']--;
			}
		}
		printf("%d\n",ans);
	}
}
