#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	int i=1;
	while(t--)
	{
		stack<char> st;
		string s;
		cin>>s;
		int flag=0;
		for(int j=0;j<s.length();j++)
		{
			if(s[j]=='1')
			{
				st.push('1');
			}
			else if(s[j]=='0')
			{
				if(st.empty())
				{
					flag=1;
					break;
				}
				else if(st.top()=='1')
				{
					st.push('0');
				}
				else if(st.top()=='0')
				{
					st.pop();
					st.pop();
				}
			}
		}
		if(flag==1 || !st.empty())
			printf("Case %d: no\n",i);
		else 
			printf("Case %d: yes\n",i);
		i++;
	}
}