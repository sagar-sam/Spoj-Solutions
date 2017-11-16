#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k,m;
		scanf("%lld%lld%lld",&n,&k,&m);
		if(n>=m)
		{
			printf("0\n");
		}
		else 
		{
			float a=(float)(log((float)(m)/(float)(n)));
			a=(float)((float)(a)/(float)(log((float)(k))));
			int b=(int)(a);
			printf("%d\n",b);
		}
	}
}
