#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,m;
		scanf("%lld",&n);
		m=n;
		long long int i=1;
		while(n>i)
		{
			n=n-i;
			i++;
		}
		i++;
		long long int num,den;
		if(i%2!=0)
		{
			num=n;
			den=i-n;
		}
		else 
		{
			den=n;
			num=i-n;
		}
		printf("TERM %lld IS %lld/%lld\n",m,num,den);
	}
}