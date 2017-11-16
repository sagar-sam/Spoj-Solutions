#include <iostream>
#include <vector>
#include <map>
#include <stdio.h>

using namespace std;

map<long long int,long long int> mp;
vector<long long int> vec(10001);

long long int binaryExponentiation(long long int x,long long int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return binaryExponentiation((x*x)%1000000007,n/2);
    else                             //n is odd
        return (x*binaryExponentiation((x*x)%1000000007,(n-1)/2))%1000000007;
}

void factorize(long long int n) {
	long long int m=n;
    map<long long int,long long int> res;
    for (long long int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res[i]++;
            n /= i;
        }
        if(mp[i]<res[i])
        {
        	mp[i]=res[i];
        }
    }
    if (n != 1) {
        res[n]++;
        if(res[n]>mp[n])
        	mp[n]=res[n];
    }
    long long int ans=1;
    for(map<long long int,long long int>::iterator it=mp.begin();it!=mp.end();it++)
    {
    	long long int x=binaryExponentiation(it->first,it->second);
    	x=x%1000000007;
    	ans=(ans*x)%1000000007;
    }
    vec[m]=ans;
}

int main()
{
	//printf("%lld\n", vec[5]);
	for(long long int i=1;i<10001;i++)
	{
		factorize(i);
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%lld\n",vec[n]);
	}
}
