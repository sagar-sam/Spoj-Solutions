#include <iostream>
#include <stdio.h>
#include <set>

using namespace std;

int main()
{
	long long int num;
	while(scanf("%lld",&num)==1)
	{
		long long int ans=0;
		while(num!=0)
		{
			ans++;
			multiset<int> s;
			long long int m=num;
			while(m>0)
			{
				s.insert(m%10);
				m=m/10;
			}
			long long int num2=0;
			for(multiset<int>::iterator it=s.begin();it!=s.end();it++)
			{
				num2=num2*10+*it;
			}
			num=num-num2;
		}
		printf("%lld\n",ans);
	}
}
