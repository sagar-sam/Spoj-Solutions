#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long int a,b;
	scanf("%lld %lld",&a,&b);
	while(a!=0 || b!=0)
	{
		int ans=0;
		int carry=0;
		while(a>0 && b>0)
		{
			int a1=a%10;
			int b1=b%10;
			if(a1+b1+carry>9)
			{
				ans++;
				carry=(a1+b1+carry)/10;
			}
			else carry=0;
			a=a/10;
			b=b/10;
		}
		while(a>0)
		{
			int a1=a%10;
			if(a1+carry>9)
			{
				ans++;
				carry=(a1+carry)/10;
			}
			else carry=0;
			a=a/10;
		}
		while(b>0)
		{
			int b1=b%10;
			if(b1+carry>9)
			{
				ans++;
				carry=(b1+carry)/10;
			}
			else carry=0;
			b=b/10;
		}
		if(ans==0)
			printf("No carry operation.\n");
		else if(ans==1)
			printf("1 carry operation.\n");
		else printf("%d carry operations.\n",ans);
		scanf("%lld %lld",&a,&b);
	}
}
