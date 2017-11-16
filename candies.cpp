#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	int i=1;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int m=n;
		int flag=0;
		m=m-5;
		if(m<3)
			flag=1;
		while(m%3!=0)
		{
			m=m-5;
			if(m<3)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("Case %d: -1\n",i);
		}
		else {
			printf("Case %d: %d\n",i,m);
		}
		i++;
	}
}
