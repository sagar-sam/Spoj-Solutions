#include <iostream>
#include <stdio.h>

using namespace std;

long long int factorize(int n) {
    long long int res=1;
    for (int i = 2; i * i <= n; ++i) {
    	int count=0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        res=res*(count+1);
    }
    if (n != 1) {
        res=res*2;
    }
    return res;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int ans=0;
		long long int n;
		scanf("%lld",&n);
		ans=factorize(n);
		(ans%2==0)?printf("NO\n"):printf("YES\n");
	}
}
