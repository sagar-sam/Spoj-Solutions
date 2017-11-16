#include <iostream>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int count=0;
		long long int m=n;
		while(n)
        {
            n = n & (n-1);
            count++;
        }
        long long int odd=2*count;
        long long int even=m+1-odd;
        if(m!=0)
        printf("%lld %lld\n",even,odd);
    	else
    		printf("0 1\n");
	}
}