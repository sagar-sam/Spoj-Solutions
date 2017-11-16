#include <iostream>
#include <stdio.h>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		int flag=0;
		vector<int> vec(n);
		stack<int> st;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&vec[i]);
		}
		int j=0;
		for(int i=1;i<=n;i++)
		{
			if(!st.empty() && st.top()==i)
				st.pop();
			else 
			{
				if(j>=n)
				{
					flag=1;
					break;
				}
				while(vec[j]!=i)
				{
					if(!st.empty() && st.top()<i)
					{
						flag=1;
						break;
					}
					else st.push(vec[j]);
					j++;
					if(j==n)
					{
						//flag=1;
						break;
					}
				}
				if(vec[j]==i)
					j++;
				if(flag==1)
					break;
			}
		}
		(flag==1)?printf("no\n"):printf("yes\n");
		scanf("%d",&n);
	}
}