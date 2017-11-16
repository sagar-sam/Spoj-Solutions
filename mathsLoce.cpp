#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int m=2*n;
		m=sqrt(m);
		if(m*(m+1)==2*n)
			printf("%lld\n",m);
		else printf("NAI\n");
	}
}