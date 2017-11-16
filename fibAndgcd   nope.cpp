#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

long long int gcd(long long int A, long long int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}

long long int fib(long long int n,int dp[])
{
	if(n==0 || n==1)
		return n;
	else 
	{
		if(dp[n]!=-1)
			return dp[n];
		dp[n-1]=fib(n-1,dp);
		dp[n-2]=fib(n-2,dp);
		return (dp[n-1]+dp[n-2])%1000000007;
	}
}

long long int binaryExponentiation(long long int x,long long int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return binaryExponentiation((x*x)%1000000007,n/2);
    else                             //n is odd
        return (x*binaryExponentiation((x*x)%1000000007,(n-1)/2))%1000000007;
}

int main()
{
	int dp[100000000]={-1};
	long long int n,k;
	long long int ans=0;
	scanf("%lld %lld",&n,&k);
	long long int *arr=new long long int[n];
	for(long long int i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			ans= (ans+gcd(fib(binaryExponentiation(arr[i],k),dp),fib(binaryExponentiation(arr[j],k),dp)))%1000000007;
		}
	printf("%lld\n",ans);
	return 0;
}