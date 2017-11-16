#include <iostream>
#include <vector>

using namespace std;

long long int binaryExponentiation(long long int x,int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)
        return binaryExponentiation((x*x)%100000007,n/2);
    else                             //n is odd
        return (x*binaryExponentiation((x*x)%100000007,(n-1)/2))%100000007;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		vector<long long int> vec(n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&vec[i]);
		}
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			sum=sum+vec[i];
			sum=sum%100000007;
		}
		long long int pow=binaryExponentiation(2,n-1);
		pow=pow%100000007;
		long long int ans=(sum*pow)%100000007;
		printf("%lld\n",ans);
	}
}
