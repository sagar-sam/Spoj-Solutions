#include <iostream>

using namespace std;

long long int GCD(long long int A,long long int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}

int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		long long int x1,y1,x2,y2;
		scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
		long long int num,den;
		num=x1*(x2+1)+y1*(y2+1);
		den=(x2+y2+1)*(x1+y1);
		if(den==0)
		{
			printf("Case %d: 0\n",i+1);
			continue;
		}
		long long int y=GCD(num,den);
		num=num/y;
		den=den/y;
		printf("Case %d: %lld/%lld\n",i+1,num,den);
	}
}