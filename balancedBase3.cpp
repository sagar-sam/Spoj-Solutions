#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int *arr;
		int n;
		scanf("%d",&n);
		int count=1;
		int a=1;
		while(n>a)
		{
			//printf("0");
			count++;
			a=a*3;
		}
		int x;
		if(a/2>=n)
		{
			x=count-1;
			arr=new int[count-1];
		}
		else 
		{
			x=count;
			arr=new int [count];
		}
		int flag;
		while(n!=1 && n!=0)
		{
			//printf("1");
			if(n>0)
				flag=0;
			else
			{
				n=-n;
				flag=1;
			}
			a=1;
			count=0;
			while(n>a)
			{
				//printf("2");
				count++;
				a=a*3;
			}
			if(a/2>=n)
			{
				if(flag==0)
				arr[count-1]=1;
				else 
					arr[count-1]=-1;
				n=n-a/3;
			}
			else
			{
				if(flag==0)
				arr[count]=1;
				else 
					arr[count]=-1;
				n=n-a;
			}
			if(flag==1)
				n=-n;
		}
		if(n==1)
			arr[0]=1;
		for(int i=x-1;i>=0;i--)
		{
			if(arr[i]==1)
				printf("+");
			else if(arr[i]==-1)
				printf("-");
			else 
				printf("0");
		}
		printf("\n");
	}
	return 0;
}
