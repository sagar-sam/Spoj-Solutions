#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	int t;
	int i=0;
	scanf("%d",&t);
	while(t--)
	{
		i++;
		vector<int> vec,max;
		int n;
		scanf("%d",&n);
		printf("Case %d:\n",i);
		while(n--)
		{
			char ch;
			scanf(" %c",&ch);
			switch(ch)
			{
				case 'A':
				int a;
				scanf("%d",&a);
				vec.push_back(a);
				if(max.empty())
					max.push_back(a);
				else if(max.back()>a)
					max.push_back(max.back());
				else 
					max.push_back(a);
				break;

				case 'R':
				if(!vec.empty())
				vec.pop_back();
				if(!max.empty())
				max.pop_back();
				break;

				case 'Q':
				if(max.empty())
					printf("Empty\n");
				else printf("%d\n",max.back());
			}
		}
	}
}