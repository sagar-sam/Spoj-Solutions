#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void computeLPSArray(string pat, int M, int *lps)
{
    int len = 0;
 
    lps[0] = 0;
 
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len-1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMPSearch(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();
 
    int lps[M];
 
    computeLPSArray(pat, M, lps);
    int count=0;
    vector<int> vec;
    int i = 0;
    int j  = 0;
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
 
        if (j == M)
        {
        	vec.push_back(i-j+1);
        	count++;
            j = lps[j-1];
        }
 
        else if (i < N && pat[j] != txt[i])
        {
            if (j != 0)
                j = lps[j-1];
            else
                i = i+1;
        }
    }
    if(count==0)
    	printf("Not Found\n");
    else
    {
	    printf("%d\n",count);
	    for(int i=0;i<vec.size();i++)
	    {
	    	printf("%d ",vec[i]);
	    }
	    printf("\n");
	}
	printf("\n");
}

int main()
{
	int t;
	scanf(" %d",&t);
	while(t--)
	{
		string a,b;
		cin>>a;
		cin>>b;
		KMPSearch(b,a);
	}
	return 0;
}