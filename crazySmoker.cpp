#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int a=1+(30*n)%11+32%11;
		long long int ans=a%11;
		if(ans!=0)
		printf("%lld\n",11-ans);
	else 
		printf("0\n");
	}
}
