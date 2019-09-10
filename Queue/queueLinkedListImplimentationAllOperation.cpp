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
	int item;
	nptr=new node;
	cout<<"\n enter the element in queue:";
	cin>>item;
	nptr->info=item;
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
	int item;
	if(front==NULL)
	{
		cout<<"\n queue is already empty.";
	}
	else
	{
		item=front->info;
		front=front->link;
	}
	cout<<"\n item:"<<item<<" deleted";
}
void peek()
{
	if(front==NULL)
	{
		cout<<"\nqueue doesn't exist.";
	}
	else
	{
	cout<<"\n first element in the queue is:"<<front->info;
	//cout<<"\n last element in the queue is:"<<rear->info;
    }
}
