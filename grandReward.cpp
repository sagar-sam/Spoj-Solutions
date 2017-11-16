#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n,t;
	scanf("%d %d",&n,&t);
	int a=t%4;
	if(a==0){
		printf("Atef\n");
		int b=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d ",b);
				b++;
			}
			printf("\n");
		}
	}
	if(a==1){
		printf("Sameh\n");
		int b=n*n-n+1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				printf("%d ",b-n*j);
			b++;
			printf("\n");
		}
	}
	if(a==2){
		printf("Ameen\n");
		int b=n*n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d ",b);
				b--;
			}
			printf("\n");
		}
	}
	if(a==3){
		printf("Shafeek\n");
		int b=n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d ",b+n*j);
			}
			printf("\n");
			b--;
		}
	}
}
