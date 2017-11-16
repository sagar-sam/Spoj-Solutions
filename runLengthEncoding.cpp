#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
	char s[100000];
	while(scanf(" %s",s)!=EOF)
	{
		for(int i=0;i<strlen(s);i++)
		{
			int count=0;
			char ch=s[i];
			while(i<strlen(s) && s[i]==ch)
			{
				count++;
				i++;
			}
			i--;
			if(count>3)
			{
				printf("%d!%c",count,s[i]);
			}
			else
			{
				for(int j=0;j<count;j++)
					printf("%c",s[i]);
			}
		}
		printf("\n");
	}
}
