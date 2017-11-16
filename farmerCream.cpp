#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long int d,f,b,m;
	scanf("%lld%lld%lld%lld",&d,&f,&b,&m);
	while(d!=0 || f!=0 || b!=0 || m!=0)
	{
		long long int mo=1+((f*(f+1))/2);
		mo*=b;
		if(mo+m>d)
		{
			printf("The firm is trying to bankrupt Farmer Cream by %lld Bsf.\n",mo+m-d);
		}
		else
		{
			printf("Farmer Cream will have %lld Bsf to spend.\n",d-mo);
		}
		scanf("%lld%lld%lld%lld",&d,&f,&b,&m);
	}
}