#include <iostream>
#include <vector>

using namespace std;

vector<int> vec;

int search(int arr[], int x, int n)
{
    for (int i = 0; i < n; i++)
      if (arr[i] == x)
         return i;
    return -1;
}

void printPostOrder(int in[], int pre[], int n)
{
   // The first element in pre[] is always root, search it
   // in in[] to find left and right subtrees
   int root = search(in, pre[0], n);
 
   // If left subtree is not empty, print left subtree
   if (root != 0)
      printPostOrder(in, pre+1, root);
 
   // If right subtree is not empty, print right subtree
   if (root != n-1)
      printPostOrder(in+root+1, pre+root+1, n-root-1);
 
   // Print root
  //cout<<pre[0]<<" ";
   vec.push_back(pre[0]);
}

int main()
{
	int n;
	scanf("%d",&n);
	//vector<int> pre(n),po(n),in(n);
	int *pre=new int[n];
	int *po=new int[n];
	int *in=new int[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&pre[i]);
	}
	for(int i=0;i<n;i++)
		scanf("%d",&po[i]);
	for(int i=0;i<n;i++)
		scanf("%d",&in[i]);
	printPostOrder(in,pre,n);
	int flag=0;
	//printf("%d",vec.size());
	for(int i=0;i<n;i++)
	{
		if(po[i]!=vec[i])
		{
			printf("no\n");
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("yes\n");
}
