#include <iostream>
using namespace std;
struct node
{
	int info;
	struct node *right,*left;
}*root=	NULL,*ptr,*nptr,*temp;
void insert(node*,node*);
int main()
{
	int tc,n,x;
    cin>>tc;
    while(tc>0)
    {
    cin>>n>>x;
    while(n!=0)
    {
    temp=new node;	
    cin>>temp->info;
    insert(root,temp);
    n--;
    }
    tc--;
	}
}
void insert(node *tree,node *nptr)
{
	if(root==NULL)
	{
		root=new node;
		root->info=nptr->info;
		root->left=NULL;
		root->right=NULL;
	}
	else
	{
		if(tree->info>nptr->info)
		{
			if(tree->left!=NULL)
			{
				insert(tree->left,nptr);
			}
			else
			{
				tree->left=nptr;
				(tree->left)->left=NULL;
				(tree->left)->right=NULL;
			}
		}
		else
		{
			if(tree->right!=NULL)
			{
				insert(tree->right,nptr);
			}
			else
			{
				tree->right=nptr;
				(tree->right)->left=NULL;
				(tree->right)->right=NULL;
			}
		}
	}
}
