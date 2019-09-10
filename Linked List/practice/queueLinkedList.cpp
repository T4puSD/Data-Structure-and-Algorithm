#include<iostream>
using namespace std;
struct node
{
	int info;
	struct node *link;
}*front=NULL,*rear=NULL,*nptr,*ptr;
void enque();
void deque();
void peek();
int main()
{
		int ch;
	while(1)
	{
	cout<<"\n1.deque?";
	cout<<"\n2.enque?";
	cout<<"\n3.peek?";
	cout<<"\n4.exit.";
	cout<<"\n===============";
	cout<<"choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			deque();
			break;
		case 2:
			enque();
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
void enque()
{
	nptr=new node;
	cout<<"\n enter the item:";
	cin>>nptr->info;
	nptr->link=NULL;
	if(front==NULL)
	{
		front=nptr;
		rear=nptr;
	}
	else
	{
		rear->link=nptr;
		rear=nptr;
	}
}
void deque()
{
	int item,flag=0;
	if(front==NULL)
	{
		cout<<"\nlist is already emptly.";
	}
	else
	{
		item=front->info;
		front=front->link;
	}
	cout<<"\n item dequed:"<<item;
}
void peek()
{
	if(front==NULL)
	{
		cout<<"\nlist doesn't exist.";
	}
	else
	{
		cout<<"\n 1st element in the list is:"<<front->info;
	}
}
