#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		if(n==1)
		{
			printf("1\n");
		}
		else if(n==2)
		{
			printf("2\n");
		}
		else if(n==4)
			printf("4\n");
		else 
		{
			int i=2;
			while(i<n)
				i*=2;
			i=i/2;
			if(n%2==0)
			{
				int ans=(n-i)/2;
				printf("%d\n",4*ans);
			}
			else 
			{
				int ans=2+((n-i)/2)*4;
				printf("%d\n",ans);
			}
		}
		scanf("%d",&n);
	}
}
