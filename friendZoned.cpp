#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	int n,q;
	scanf("%d %d",&n,&q);
	vector<int> vec(n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&vec[i]);
	}
	for(int i=0;i<q;i++)
	{
		int l,r;
		scanf("%d %d",&l,&r);
		if(l==r)
			printf("%d\n",vec[l-1]);
		else 
			printf("0\n");
	}
	return 0;
}
