#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		int *flag=new int[n];
		for(int i=0;i<k;i++)
		{
			int a;
			scanf("%d",&a);
			flag[a-1]=1;
		}
		int ans=0;
		for(int i=0;i<n;i++)
		{
			if(flag[i]==1)
			{
				ans++;
			}
			else if(i==0 && flag[1]==0)
			{
				ans++;
				flag[0]=1;
			}
			else if((i-1)>=0 && flag[i-1]==0 && (i+1)<n && flag[i+1]==0)
			{
				flag[i]=1;
				ans++;
			}
			else if(i==n-1 && flag[n-2]==0)
			{
				ans++;
			}
		}
		printf("%d\n",ans);
	}
}
