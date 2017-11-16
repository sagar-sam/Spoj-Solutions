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
		int a,b;
		scanf("%d %d",&a,&b);
		int s=GCD(a,b);
		a=a/s;
		b=b/s;
		printf("%d %d\n",b,a);
	}
}
