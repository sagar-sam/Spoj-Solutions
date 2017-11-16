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
	long long int a,b;
	scanf("%lld %lld",&a,&b);
	printf("%lld\n",GCD(a,b));
}