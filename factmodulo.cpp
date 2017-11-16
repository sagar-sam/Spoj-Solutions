#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long int a,b;
	scanf("%lld %lld",&a,&b);
	long long int fact=1;
	long long int count=0;
	for(int i=1;i<=b;i++)
	{
		if(fact%b==0)
			break;
		if(fact%a==0 && fact%b!=0)
			count++;
		fact=fact*(i+1);
		//printf("%lld    ",fact);
	}
	printf("%lld\n",count);
}
