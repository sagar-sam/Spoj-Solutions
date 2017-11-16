#include <iostream>
#include <stdio.h>

using namespace std;

long long int GCD(long long int A,long long int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int p,q;
		q=6*n*n*n;
		p=n*(n+1);
		if(n%2==0)
		{
			n=n-2;
			n=n/2;
			p=p+2*n*(n+1);
		}
		else 
		{
			if(n!=1)
			{
				n=n-2;
				n=n/2;
				p=p+2*(n+1);
				p=p+2*n*(n+1);
			}
		}
		long long int g=GCD(p,q);
		p=p/g;
		q=q/g;
		printf("%lld/%lld\n",p,q);
	}
	return 0;
}
