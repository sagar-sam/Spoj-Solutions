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
		long long int m,n;
		scanf("%lld %lld",&m,&n);
		long long int small=s.length();
		long long int large=s.length();
		if(m==n)
		{
			printf("%d %d\n",s.length(),s.length());
		}
		else if(m<n)
		{
			small=s.length();
			for(int i=0;i<s.length();i++)
			{
				if(s[i]=='a')
				{
					int flag=0;
					for(int j=i;j<i+m;j++)
					{
						if(s[j]!='a')
						{
							flag=1;
							break;
						}
					}
					if(flag==0)
						i=i+m-1;
					if(flag==0)
					{
						large=large+n-m;
					}
				}
			}
			printf("%lld %lld\n",small,large);
		}
		else if(m>n)
		{
			large=s.length();
			for(int i=0;i<s.length();i++)
			{
				if(s[i]=='a')
				{
					int flag=0;
					for(int j=i;j<i+m;j++)
					{
						if(s[j]!='a')
						{
							flag=1;
							break;
						}
					}
					if(flag==0)
						i=i+m-1;
					if(flag==0)
					{
						small=small+n-m;
					}
				}
			}
			printf("%lld %lld\n",small,large);
		}
	}
}