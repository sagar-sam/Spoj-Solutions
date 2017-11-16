#include <iostream>
#include <stdio.h>

using namespace std;

long long int GCD(long long int A, long long int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,a,b;
		scanf("%lld %lld %lld",&n,&a,&b);
		long long int k=GCD(a,b);
		for(int i=0;i<k;i++)
			printf("%lld",n);
		printf("\n");
	}
}