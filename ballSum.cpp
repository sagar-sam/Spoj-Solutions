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
	long long int n,k;
	scanf("%lld%lld",&n,&k);
	do
	{
		if(k==1 || k==2)
			printf("0\n");
		else
		{
		long long int num=0;
		if(k%2==0)
		{
			long long int a=k/2-1;
			num=a*(a+1);
		}
		else 
		{
			long long int a=k/2;
			num=a+(a-1)*(a);
		}
		long long int den=n*(n-1)/2;
		long long int g=GCD(num,den);
		num=num/g;
		den=den/g;
		printf("%lld/%lld\n",num,den);
	}
		scanf("%lld%lld",&n,&k);
	}while(n!=-1 && k!=-1);
}
