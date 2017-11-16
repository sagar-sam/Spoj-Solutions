#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		vector<int> vec;
		int n;
		scanf("%d",&n);
		int count=0;
		for(int i=0;i<n;i++)
		{
			int a;
			scanf("%d",&a);
			vec.push_back(a);
		}
		for(int i=0;i<n;i++)
			if(find(vec.begin(),vec.end(),vec[i]*2)!=vec.end())
				count++;
		printf("%d\n",count);
	}
}
