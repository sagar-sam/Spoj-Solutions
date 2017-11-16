#include <iostream>
#include <stdio.h>
#include <set>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	set<int> s;
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		s.insert(x);
		int m;
		scanf("%d",&m);
		for(int j=0;j<m;j++)
		{
			int y;
			scanf("%d",&y);
			s.insert(y);
		}
	}
	int z=s.size();
	printf("%d\n",z-n);
}