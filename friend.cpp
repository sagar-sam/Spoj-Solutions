#include <iostream>
#include <stdio.h>
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
	bool allzeroes;
	long long int sum=0;
	long long int power=0;
	do
	{
		allzeroes=true;
		long long int count[2]={0};
		for(long long int i=0;i<n;i++)
		{
			count[vec[i]&1]++;
			vec[i] >>= 1;
			if(vec[i])
				allzeroes=false;
		}
		sum += (count[0]*count[1]) << power++;
	}while(!allzeroes);
	printf("%lld\n",sum);
}
