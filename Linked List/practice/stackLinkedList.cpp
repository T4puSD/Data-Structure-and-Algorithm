#include<iostream>
using namespace std;
struct node
{
	int info;
	struct node *link;
}*nptr,*top;
void pop();
void push();
void peek();
int main()
{
	
	while(1)
	{
		int ch;
		cout<<"\n========================";
		cout<<"\n1.pop";
		cout<<"\n2.push";
		cout<<"\n3.peek";
		cout<<"\n4.exit";
		cout<<"\n========================";
		cout<<"\nchoose:";
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
				exit(0);
			default:
				cout<<"\n invalid choice.";
		}
	}
}
void pop()
{
	int item;
	if(top==NULL)
	{
		cout<<"\n underflow.";
	}
	else
	{
		
		item=top->info;
	    top=top->link;
	}
	cout<<"\n item popped:"<<item;
}
void push()
{
	nptr=new node;
	cout<<"\n enter the element:";
	cin>>nptr->info;
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
void peek()
{
	int item;
	if(top==NULL)
	{
		cout<<"\n stack doesn't exist.";
	}
	else
	{
		item=top->info;
		cout<<"\n top of the stack is:"<<item;
    }
}
