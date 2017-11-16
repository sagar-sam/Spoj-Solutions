#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int ans=0;
		int xp,nb;
		scanf("%d %d",&xp,&nb);
		if(2*xp<=nb)
		{
			ans=xp;
		}
		else if(2*nb<=xp)
		{
			ans=nb;
		}
		else {
			while(xp!=0 && nb!=0 && xp!=nb)
			{
				if(xp>nb)
				{
					xp=xp-2;
					nb=nb-1;
					ans++;
				}
				else if(nb>xp)
				{
					ans++;
					nb=nb-2;
					xp=xp-1;
				}
			}
			if(xp==nb)
				ans=ans+(xp+nb)/3;
		}
		printf("%d\n",ans);
	}
}
