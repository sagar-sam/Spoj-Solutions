#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		int x=sqrt(a);
		int y=sqrt(b);
		vector<int> vec;
		int pre=a;
		for(int i=x;i<y;i++)
		{
			vec.push_back((i+1)*(i+1)-pre);
			pre=(i+1)*(i+1);
		}
		int an,xo;
		if(vec.size()==1)
		{
			xo=vec[0];
			an=vec[0];
		}
		else 
		{
			xo=vec[0]^vec[1];
			an=vec[0]&vec[1];
		}
		for(int i=2;i<vec.size();i++)
		{
			xo=xo^vec[i];
			an=an&vec[i];
		}
		int ans=xo&an;
		printf("%d\n",ans);
	}
}