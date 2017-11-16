#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void computeLPSArray(string pat, int M, int *lps)
{
    // length of the previous longest prefix suffix
    int len = 0;
 
    lps[0] = 0; // lps[0] is always 0
 
    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar 
            // to search step.
            if (len != 0)
            {
                len = lps[len-1];
 
                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
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
 
    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    int lps[M];
 
    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);
 
    int i = 0;  // index for txt[]
    int j  = 0;  // index for pat[]
    int flag=0;
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
 
        if (j == M)
        {
        	flag=1;
            //printf("Found pattern at index %d \n", i-j);
            j = lps[j-1];
        }
 
        // mismatch after j matches
        else if (i < N && pat[j] != txt[i])
        {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j-1];
            else
                i = i+1;
        }
    }
    if(flag==0)
    	printf("NO\n");
    else printf("YES\n");
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		vector<int> vec(n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&vec[i]);
		}
		string s;
		for(int i=1;i<n;i++)
		{
			if(vec[i]-vec[i-1]>0)
			{
				s=s+'G';
			}
			else if(vec[i]<vec[i-1])
				s=s+'L';
			else
				s=s+'E';
		}
		string pat;
		cin>>pat;
		KMPSearch(pat,s);
	}
	return 0;
}