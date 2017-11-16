#include <iostream>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		float ans=0;
		for(int i=1;i<=n;i++)
		{
			ans=ans+((float)(n)/(float)(i));
		}
		printf("%.2f\n",ans);
	}
}