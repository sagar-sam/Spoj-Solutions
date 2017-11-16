#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		int a;
		vector<int> vec;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			vec.push_back(a);
		}
		int i=0;
		while(k>0 && i<n && vec[i]<0)
		{
			vec[i]=-vec[i];
			k--;
			i++;
		}
		if(k>0)
		{
			if(i==n)
			{
				i--;
				if(k%2!=0)
				{
					vec[i]=-vec[i];
				}
			}
			else 
			{
				if(k%2!=0)
				{
					if(i>0)
					{
						if(vec[i]<vec[i-1])
							vec[i]=-vec[i];
						else vec[i-1]=-vec[i-1];
					}
					else 
						vec[i]=-vec[i];
				}
			}
		}
		int sum=0;
		for(int j=0;j<n;j++)
		{
			sum=sum+vec[j];
		}
		printf("%d\n",sum);
	}
}
