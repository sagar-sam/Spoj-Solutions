#include <iostream>
#include <map>

using namespace std;

int main()
{
	long long int n,m;
	scanf("%lld",&n);
	map<long long int,long long int> a,b;
	long long int x;
	for(long long int i=0;i<n;i++)
	{
		scanf("%lld",&x);
    	for (long long int j = 2; j * j <= x; ++j) {
        	while (x % j == 0) {
            	a[j]++;
        	    x /= j;
        	}
    	}
    	if (x != 1) {
        	a[x]++;
    	}
	}
	scanf("%lld",&m);
	for(long long int i=0;i<m;i++)
	{
		scanf("%lld",&x);
    	for (long long int j = 2; j * j <= x; ++j) {
        	while (x % j == 0) {
            	b[j]++;
            	x /= j;
        	}
    	}
    	if (x != 1) {
        	b[x]++;
    	}
	}
	long long int ans=1;
	int flag=0;
	for(map<long long int,long long int>:: iterator it=a.begin();it!=a.end();it++)
	{
		long long int a1=it->second;
		long long int a2=b[it->first];
		long long int a3=(a1>a2)?a2:a1;
		for(long long int i=0;i<a3;i++)
		{
			ans=ans*it->first;
			if(ans>=1000000000)
			{
				flag=1;
				ans=ans%1000000000;
			}
		}
	}
	if(flag==0)
		printf("%lld\n",ans);
	else
	{
		if(ans<100000000)
			printf("0");
		if(ans<10000000)
			printf("0");
		if(ans<1000000)
			printf("0");
		if(ans<100000)
			printf("0");
		if(ans<10000)
			printf("0");
		if(ans<1000)
			printf("0");
		if(ans<100)
			printf("0");
		if(ans<10)
			printf("0");
		printf("%lld\n",ans);
	}
}