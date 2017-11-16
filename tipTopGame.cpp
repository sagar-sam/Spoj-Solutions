#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	int i=1;
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
    	long long int a= sqrt(n);
		if(a*a==n)
			printf("Case %d: Yes\n",i);
		else printf("Case %d: No\n",i);
		i++;
	}
}
