#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long int a,b,c,d,e,w;
	scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&w);
	if(w%2!=0)
		printf("NO\n");
	else 
	{
		if(2*a+4*b+8*c+16*d+32*e>=w)
			printf("YES\n");
		else printf("NO\n");
	}
}
