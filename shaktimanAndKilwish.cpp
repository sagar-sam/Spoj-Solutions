#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(n%2==0)
			printf("Thankyou Shaktiman\n");
		else 
			printf("Sorry Shaktiman\n");
	}
}
