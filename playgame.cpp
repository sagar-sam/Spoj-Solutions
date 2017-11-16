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
		if(n%3==0)
		{
			printf("Ragini\n");
		}
		else 
		{
			printf("Hemlata\n");
		}
	}
}
