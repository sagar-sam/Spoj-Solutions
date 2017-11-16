#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	vector<int> p(n);
	vector<long long int> sum(n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		if(i==0)
			sum[i]=p[i];
		else 
			sum[i]=p[i]+sum[i-1];
	}
	int q;
	scanf("%d",&q);
	while(q--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(a==1)
			printf("%lld\n",sum[b-1]);
		else
		printf("%lld\n",sum[b-1]-sum[a-2]);
	}
	return 0;
}