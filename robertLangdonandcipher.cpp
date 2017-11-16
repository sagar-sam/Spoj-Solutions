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
		int a;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a<0)
				printf("%d ",a);
			else if(a==1)
				printf("-3 ");
			else if(a==2)
				printf("-2 ");
			else if(a==5)
				printf("-3 ");
			else 
				printf("-4 ");
		}
		printf("\n");
	}
}
