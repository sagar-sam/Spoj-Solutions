#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n ;
		scanf("%lld",&n);
		long long int m=n%6;
		switch(m)
		{
			case 1:
			printf("1\n");
			break;
			case 2:
			printf("4\n");
			break;
			case 3:
			printf("6\n");
			break;
			case 4:
			printf("5\n");
			break;
			case 5:
			printf("2\n");
			break;
			case 0:
			printf("0\n");
			break;
		}
	}
}
