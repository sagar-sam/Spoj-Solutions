#include <iostream>
#include <vector>
#include <stdio.h>

double ans=0;

void solve(float n,float k,vector<float> vec)
{

}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		float n,k;
		scanf("%lf%lf",&n,&k);
		vector<float> vec(n);
		for(int i=0;i<n;i++)
			scanf("%lf",&vec[n]);
		solve(n,k,vec);
	}
}