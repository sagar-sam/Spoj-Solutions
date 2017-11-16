#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long int n;
	scanf("%lld",&n);
	vector<long long int> vec(n);
	for(long long int i=0;i<n;i++)
	{
		scanf("%lld",&vec[i]);
	}
	vector<long long int> bit;
	int more=1;
	while(more)
	{
		more=0;
		long long int count1=0;
		long long int count0=0;
		for(long long int i=0;i<n;i++)
		{
			long long int x=(vec[i]&1);
			vec[i]=vec[i]/2;
			if(x==0)
				count0++;
			else if(x==1)
				count1++;
			if(vec[i])
				more=1;
		}
		if(count0==0)
			bit.push_back(0);
		else if(count1==0)
			bit.push_back(0);
		else 
			bit.push_back(1);
	}
	long long int ans=0;
	for(long long int i=bit.size()-1;i>=0;i--)
	{
		ans=ans*2+bit[i];
	}
	printf("%lld\n",ans);
}