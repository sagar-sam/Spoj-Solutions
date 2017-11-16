#include <iostream>
#include <stdio.h>

using namespace std;

int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,n;
		scanf("%d%d%d",&a,&b,&n);
		int max,min;
		if(a>b)
		{
			max=a;
			min=b;
		}
		else 
		{
			max=b;
			min=a;
		}
		int g=GCD(max,min);
		int ter=max/g+1;
		int seq=n/ter;
		int sw=n%ter;
		int gap=a*b/g;
	}
}