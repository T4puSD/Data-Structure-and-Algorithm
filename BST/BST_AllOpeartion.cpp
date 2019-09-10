#include<iostream>
#include<math.h>
using namespace std;
struct node
{
	int info;
	struct node *left,*right;
}*root=NULL,*nptr,*temp,*ptr;

void insert(node *,node*);
void preorder(node*);
void postorder(node*);
void inorder(node*);
void find_max(node*);
void find_min(node*);
int max1,min1;
int main()
{
	int ch;
	while(1)
	{
	cout<<"\n--------------------BST---------------------";
	cout<<"\n==========================================";
	cout<<"\n 1.Insert.";
	cout<<"\n 2.Preorder.";
	cout<<"\n 3.Postorder.";
	cout<<"\n 4.Inorder.";
	cout<<"\n 5.Max Element.";
	cout<<"\n 6.Min Element.";
	cout<<"\n 7.Exit.";
	cout<<"\n=====================================";
	cout<<"\n---------------------------";
	cout<<"choose:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			int item;
			cout<<"\n Enter element:";
			cin>>item;
			temp=new node;
			temp->info=item;
			insert(root,temp);
			break;
		case 2:
			preorder(root);
			break;
		case 3:
			postorder(root);
			break;
		case 4:
			inorder(root);
			break;
		case 5:
			find_max(root);
			//cout<<"\n Max element is:"<<max1<<endl;
			break;
		case 6:
			find_min(root);
			//cout<<"\n Min element is:"<<min1<<endl;
			break;
		case 7:
			exit(0);
		default:
			cout<<"\n wrong choice:";
	}
	}
}
void insert(node * tree,node * nptr)
{
	if(root==NULL)
	{
		root=new node;
		root->info=nptr->info;
		root->left=NULL;
		root->right=NULL;
		cout<<"\n root node added.";
	}
	else
	{
		if(tree->info==nptr->info)
		{
			cout<<"\n element already exist.";
			return;
		}
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
				cout<<"\n node added at left.";
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
				cout<<"\n node added at right.";
			}
		}
	}
}
void find_max(node *ptr)
{
	if(root==NULL)
	{
		cout<<"\n BST doesn't exist.";
		return;
	}
	else
	{
		while(ptr->right!=NULL)
		{
			ptr=ptr->right;
		}
		cout<<"\n Max element is:"<<ptr->info<<endl;
	}
}
void find_min(node* ptr)
{
	if(root==NULL)
	{
		cout<<"\n BST doesn't not exist.";
		return;
	}
	else
	{
		while(ptr->left!=NULL)
		{
			ptr=ptr->left;
		}
		cout<<"\n Min Element is:"<<ptr->info<<endl;
		
	}
}
void preorder(node *ptr)
{
	if(root==NULL)
	{
		cout<<"\n BST doesn't exist.";
		return;
	}
	else
	{
		if(ptr!=NULL)
		{
		cout<<ptr->info<<ends;
		preorder(ptr->left);
		preorder(ptr->right);
		}
	}
}
void postorder(node *ptr)
{
	if(root==NULL)
	{
		cout<<"\n BST doesn't exist.";
		return;
	}
	else
	{
		if(ptr!=NULL)
		{
		postorder(ptr->left);
		postorder(ptr->right);
		cout<<ptr->info<<ends;
		}
	}
}
void inorder(node *ptr)
{
	if(root==NULL)
	{
		cout<<"\n BST doesn't exist.";
		return;
	}
	else
	{
		if(ptr!=NULL)
		{
		inorder(ptr->left);
		cout<<ptr->info<<ends;
		inorder(ptr->right);
		}
	}
}
