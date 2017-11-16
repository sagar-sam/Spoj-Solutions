#include <iostream>
#include <stdio.h>
#include <set>
#include <iterator>

using namespace std;

int main()
{
	int j=1;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		set<int> s;
		int n,m;
		scanf("%d %d",&n,&m);
		for(int i=0;i<m;i++)
		{
			int a;
			scanf("%d",&a);
			s.insert(a);
		}
		long long int ans=0;
		set<int> :: iterator it=s.begin();
		if(*it>=2)
			ans+=1;
		while(++it!=s.end())
		{
			int a=*(--it);
			int b=*(++it);
			if(b-a>=3)
				ans+=3;
			else 
				ans=ans+b-a;
		}
		ans+=1;
		if(*(--it)<n)
			ans+=1;
		if(n>ans)
			printf("Case %d: %lld\n",j,ans);
		else 
			printf("Case %d: %d\n",j,n);
		j++;
	}
}
