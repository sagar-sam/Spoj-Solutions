#include <iostream>

using namespace std;

int main()
{
	long long int pow[100001];
	long long int x=1;
	for(long long int i=0;i<100001;i++)
	{
		pow[i]=x;
		x=(x*2)%1000000007;
	}
	long long int ans[100001];
	ans[0]=1;
	for(int i=1;i<100001;i++)
	{
		ans[i]=((2*ans[i-1])%1000000007+pow[i-1])%1000000007;
	}
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int n;
		scanf("%d",&n);
		printf("Case %d: %lld\n",i+1,ans[n-1]);
	}
}