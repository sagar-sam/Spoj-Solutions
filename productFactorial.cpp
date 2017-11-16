#include <iostream>
#include <stdio.h>

using namespace std;

long long int binaryExponentiation(long long int x,long long int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return binaryExponentiation((x*x)%109546051211,n/2);
    else                             //n is odd
        return (x*binaryExponentiation((x*x)%109546051211,(n-1)/2))%109546051211;
}

int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int ans=1;
	long long int count=1;
	for(long long int i=n;i>1;i--)
	{
		ans=(ans*binaryExponentiation(i,count))%109546051211;
		if(ans==0)
			break;
		count++;
	}
	printf("%lld\n",ans);
}