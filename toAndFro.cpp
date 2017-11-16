#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	int c;
	scanf("%d",&c);
	while(c!=0)
	{
		string seq;
		cin>>seq;
		int count=0;
		int flag=2*c-1;
		int flag2=1;
		int index=0;
		int m=0;
		for(int i=0;i<c;i++)
		{
				for(int i=0;i<seq.length()/c;i++)
			{
				printf("%c",seq[index]);
				if(m==0)
				{
					index=index+flag;
					m=1;
				}
				else {
					m=0;
					index=index+flag2;
				}
			}
			flag=flag-2;
			flag2=flag2+2;
			count++;
			index=count;
			m=0;
		}
		printf("\n");
		scanf("%d",&c);
	}
}
