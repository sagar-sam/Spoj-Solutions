#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string key,msg;
		cin>>key;
		cin>>msg;
		int j=0;
		int flag=0;
		for(int i=0;i<msg.length();i++)
		{
			msg[i]=msg[i]-key[j]+'0';
			if(msg[i]<'a')
				msg[i]=msg[i]+26;
			if(flag==0)
				j++;
			else j--;
			if(j==key.length())
			{
				j--;
				flag=1;
			}
			if(j==-1)
			{
				j++;
				flag=0;
			}
		}
		cout<<msg<<endl;
	}
}
