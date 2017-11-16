#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int h,p,a;
		scanf("%d%d%d",&h,&p,&a);
		int t=0;
		int i=1;
		while(true)
		{
			h=h-i*p;
			i++;
			if(h<=0)
			{
				t=t+1;
				break;
			}
			h=h+a;
			t=t+2;
		}
		printf("%d\n",t);
	}
}