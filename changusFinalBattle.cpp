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
		long long int n;
		scanf("%lld",&n);
		long long int m=sqrt(n);
		if(m*m==n)
		printf("%lld\n",2*m-1);
		else 
		{
			if(n-(m*m)<((m+1)*(m+1))-n)
			{
				printf("%lld\n",2*m);
			}
			else 
				printf("%lld\n",2*m+1);
		}
	}
}