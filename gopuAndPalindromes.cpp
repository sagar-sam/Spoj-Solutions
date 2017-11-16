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
		string s;
		cin>>s;
		vector< pair<char,int> > vec;
		for(int i=0;i<s.length();i++)
		{
			int count=0;
			char ch=s[i];
			while(s[i]==ch)
			{
				count++;
				i++;
			}
			i--;
			vec.push_back(pair<char,int>(s[i],count));
		}
		int i=0;
		int j=vec.size()-1;
		int flag=0;
		while(i<j)
		{
			if(vec[i].first!=vec[j].first)
			{
				flag=1;
				break;
			}
			else 
			{
				i++;
				j--;
			}
		}
		if(flag==0)
			printf("YES\n");
		else 
			printf("NO\n");
	}
}