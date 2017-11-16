#include <iostream>
#include <stdio.h>

using namespace std;

long long int binaryExponentiation(long long int x,long long int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return (binaryExponentiation((x*x)%1000000007,n/2))%1000000007;
    else                             //n is odd
        return ((x*binaryExponentiation((x*x)%1000000007,(n-1)/2))%1000000007)%1000000007;
}

int main()
{
	long long int a,b,c;
	scanf("%lld %lld %lld",&a,&b,&c);
	while(a!=-1 && b!=-1 && c!=-1)
	{
		long long int res1=binaryExponentiation(b,c)%1000000007;
		printf("%lld\n",res1);
		long long int res2=(binaryExponentiation(a,res1))%1000000007;
		printf("%lld\n",res2);
		scanf("%lld%lld%lld",&a,&b,&c);
	}
	return 0;
}
