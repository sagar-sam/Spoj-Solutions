#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

long long int *arr;
void factorize(long long int n) {
    
    for (long long int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            arr[i]=arr[i]+1;
            n /= i;
        }
    }
    if (n != 1) {
        arr[n]=arr[n]+1;
    }
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		arr = new long long int[n+1];
		for(long long int i=0;i<=n;i++)
			arr[i]=0;
		for(long long int i=2;i<=n;i++)
		{
			factorize(i);
		}
		long long int ans=1;
		for(long long int i=0;i<=n;i++)
		{
			//printf("%lld",arr[i]+1);
			ans=(ans*(arr[i]+1))%1000000007;
		}
		printf("%lld\n",ans);
		delete arr;
	}
}
