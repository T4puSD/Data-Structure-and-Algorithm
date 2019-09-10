#include<iostream>
using namespace std;
struct node
{
	int info;
	struct node *link;
}*top=NULL,*nptr,*ptr;
void push();
void pop();
void peek();
int main()
{
	int ch;
	while(1)
	{
	cout<<"\n1.pop?";
	cout<<"\n2.push?";
	cout<<"\n3.peek?";
	cout<<"\n4.exit.";
	cout<<"\n===============";
	cout<<"choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			pop();
			break;
		case 2:
			push();
			break;
		case 3:
			peek();
			break;
		case 4:
			return 0;
		default:
			cout<<"\n wrong choice.";
	}
    }
}
void push()
{
	int item;
	nptr=new node;
	cout<<"\n enter the element to push:";
	cin>>item;
	nptr->info=item;
	if(top==NULL)
	{
		top=nptr;
		nptr->link=NULL;
	}
	else
	{
		nptr->link=top;
		top=nptr;
	}
}
void pop()
{
	int item;
	if(top==NULL)
	{
		cout<<"\n stack is empty.";
	}
	else
	{
		item=top->info;
		top=top->link;
		cout<<"item poped:"<<item;
	}
	
}
void peek()
{
	if(top==NULL)
	{
		cout<<"\n stack is empty.";
	}
	else
	{
		cout<<"top is:"<<top->info;
	}
}
