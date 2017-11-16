#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int a=n/4;
		long long int b=n%4;
		long long int x,y;
		switch(b)
		{
			case 0:
			y=x=-2*a;
			break;
			case 1:
			x=2*a+1;
			y=-2*a;
			break;
			case 2:
			x=2*a+1;
			y=2*a+2;
			break;
			case 3:
			x=-2-2*a;
			y=2+2*a;
			break;
		}
		printf("%lld %lld\n",x,y);
	}
}
