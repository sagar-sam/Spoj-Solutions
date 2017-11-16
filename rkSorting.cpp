#include <iostream>
#include <stdio.h>
#include <map>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	vector<int> pref;
	int n;
	int l;
	scanf("%d %d",&n,&l);
	map<int,int> um;
	int a;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		um[a]++;
		if(find(pref.begin(),pref.end(),a)==pref.end())
		{
			pref.push_back(a);
		}
	}
	multimap<int,int> mp;

	for(map<int,int> :: iterator it=um.begin();it!=um.end();it++)
	{
		mp.insert(pair<int,int>(it->second,it->first));
	}
	vector< pair<int,int> > sor;
	for(multimap<int,int> :: iterator it=mp.begin();it!=mp.end();it++)
	{
		sor.push_back(make_pair(it->first,it->second));
	}
	for(vector< pair<int,int> > :: iterator it=sor.end()-1;(it+1)!=sor.begin();it--)
	{
		vector< pair<int,int> > :: iterator it2=it;
		vector< pair<int,int> > :: iterator it1=it;
		it--;
		if(it1!=sor.begin() && it1->first==it->first)
		{
			vector<int> check;
			while(it1!=sor.begin() && it1->first==it->first)
			{
				check.push_back(it1->second);
				it1=it;
				it--;
			}
			check.push_back(it1->second);
			for(int i=0;i<pref.size();i++)
			{
				if(find(check.begin(),check.end(),pref[i])!=check.end())
				{
					for(int j=0;j<it1->first;j++)
						printf("%d ",pref[i]);
				}
			}
		}
		else
		{
			it=it2;
			for(int i=0;i<it->first;i++)
				printf("%d ",it->second);
		}
		it=it1;
	}
	printf("\n");
	return 0;
}
