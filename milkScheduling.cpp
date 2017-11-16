#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int t,m;
	multimap<long long int,long long int> ma;
	for(long long int i=0;i<n;i++)
	{
		scanf("%lld %lld",&m,&t);
		ma.insert(pair<long long int,long long int>(m,t));
	}
	long long int avtime[100000]={0};
	long long int ans=0;
	multimap<long long int,long long int> :: iterator it=ma.end();
	it--;
	ans=ans+it->first;
	avtime[it->second]=1;
	while(true)
	{
		if(it==ma.begin())
			break;
		else it--;
		m=it->first;
		t=it->second;
		for(long long int i=t;i>=1;i--)
		{
			if(avtime[i]==0)
			{
				avtime[i]=1;
				ans=ans+m;
				break;
			}
		}
	}
	printf("%lld\n",ans);
	return 0;
}
