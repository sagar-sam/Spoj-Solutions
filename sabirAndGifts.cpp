#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

long long int ind1;
long long int ind2;

void first(long long int arr[], long long int low, long long int high,long long int x,long long int n)
{
    if(high >= low)
    {
        long long int mid = low + (high - low)/2;
        ind1=mid;
        if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x)
            { 
            	ind1=mid;
            	return;
            }
        else if(x > arr[mid])
        {
            first(arr, (mid + 1), high, x,n);
            return;
        }
        else
        {
            first(arr, low, (mid -1), x,n);
            return;
        }
    }
    return;
}

void last(long long int arr[],long long  int low,long long  int high,long long  int x,long long int n)
{
    if (high >= low)
    {
        long long int mid = low + (high - low)/2;
        ind2=mid;
        if (( mid == n-1 || x < arr[mid+1]) && arr[mid] == x)
        {
            ind2= mid;
            return;
        }
        else if (x < arr[mid])
        {
            last(arr, low, (mid -1), x,n);
            return;
        }
        else
        {
            last(arr, (mid + 1), high, x,n);
            return;
        }
    }
    return;
}

void merge(long long int arr[], long long int l,long long  int m,long long  int r)
{
    long long int i, j, k;
    long long int n1 = m - l + 1;
    long long int n2 =  r - m;
 
    /* create temp arrays */
    long long int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(long long int arr[],long long int l,long long int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        long long int m = l+(r-l)/2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}

int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int *arr=new long long int[n];
	for(long long int i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	mergeSort(arr,0,n-1);
	long long int q;
	scanf("%lld",&q);
	while(q--)
	{
		long long int ans=0;
		long long int a,b;
		scanf("%lld %lld",&a,&b);
		first(arr,0,n-1,a,n);
		last(arr,0,n-1,b,n);
		for(long long int i=ind1;i<=ind2;i++)
			ans+=arr[i];
		printf("%lld\n",ans);
	}
	return 0;
}
