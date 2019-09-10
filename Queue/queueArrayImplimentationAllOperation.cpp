#include<iostream>
using namespace std;
int front=-1,rear=-1;
void enque(int size,int queue[]);
void deque(int size,int queue[]);
void peek(int queue[]);
int main()
{
	int size;
	cout<<"\n enter the size of the queue:";
	cin>>size;
	size=size-1;
	int queue[size];
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
			deque(size,&queue[0]);
			break;
		case 2:
			enque(size,&queue[0]);
			break;
		case 3:
			peek(&queue[0]);
			break;
		case 4:
			return 0;
		default:
			cout<<"\n wrong choice.";
	}
    }
}
void enque(int size,int queue[])
{
	int item;
	cout<<"\n enter element to queue:";
	cin>>item;
	if((rear==size&&front==-1)||(front==rear+1))
	{
		cout<<"\noverflow.";
	}
	else
	{
	queue[rear]=item;
	rear++;
    }
	
}
void deque(int size,int queue[])
{
	int item;
	if(front==rear)
	{
		cout<<"\nunderflow.";	
	}
	
	else
	{
		item=queue[front];
		front++;
	}
	cout<<"\n item:"<<item<<" dequed.";
}
void peek(int queue[])
{
	if(front==-1&&rear==-1)
	{
		cout<<"\nqueue is empty.";
	}
	else
	{
		cout<<"\n front is:"<<queue[front];
	}
}
