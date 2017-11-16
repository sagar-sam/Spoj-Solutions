#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
	long long int y;
	scanf("%lld",&y);
	long long int p;
	scanf("%lld",&p);
	long long int max=pow(2,y);
	int flag=0;
	for(long long int i=y;i>=1;i--)
	{
		if(p<max/2)
		{
			flag=1-flag;
		}
		else
		{
			p=p-max/2;
		}
		max=max/2;
	}
	if(flag==0)
		printf("red\n");
	else 
		printf("blue\n");
}
