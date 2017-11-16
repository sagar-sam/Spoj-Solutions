#include <iostream>
#include <stdio.h>
#include <deque>

using namespace std;

int main()
{
	int flag=0;
	deque<int> d;
	int q;
	scanf("%d",&q);
	while(q--)
	{
		string s;
		cin>>s;
		if(s=="back")
		{
			if(d.empty())
				printf("No job for Ada?\n");
			else if(flag==0)
			{
				printf("%d\n",d.back());
				d.pop_back();
			}
			else 
			{
				printf("%d\n",d.front());
				d.pop_front();
			}
		}
		else if(s=="front")
		{
			if(d.empty())
				printf("No job for Ada?\n");
			else if(flag==0)
			{
				printf("%d\n",d.front());
				d.pop_front();
			}
			else
			{
				printf("%d\n",d.back());
				d.pop_back();
			}
		}
		else if(s=="reverse")
			flag=1-flag;
		else if(s=="push_back")
		{
			int a;
			scanf("%d",&a);
			if(flag==0)
			d.push_back(a);
			else 
				d.push_front(a);
		}
		else if(s=="toFront")
		{
			int a;
			scanf("%d",&a);
			if(flag==0)
			d.push_front(a);
		else 
			d.push_back(a);
		}
	}
	return 0;
}
