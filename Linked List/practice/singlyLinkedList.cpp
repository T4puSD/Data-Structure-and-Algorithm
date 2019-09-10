#include<iostream>
using namespace std;
struct node
{
	int info;
	struct node *link;
}*ptr,*nptr,*start;

void addnode();
void travarsal();
void reverse();
void addAtFirst();
void addAfterPosition();
void search();
void delete_1st();
void delete_last();
void deleteAtPos();

int main()
{
	int ch;
	while(1)
	{
		cout<<"\n\n1.Add Node At End.";
		cout<<"\n\n2.Travarse.";
		cout<<"\n\n3.Reverse.";
		cout<<"\n\n4.Add Node At First";
		cout<<"\n\n5.Add After Position.";
		cout<<"\n\n6.Search.";
		cout<<"\n\n7.Delete 1st Node.";
		cout<<"\n\n8.Delete Last Node.";
		cout<<"\n\n9.Delete At Pos.";
		cout<<"\n\n10.exit.";
		cout<<"\n==============";
		cout<<"choose:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				addnode();
				break;
			case 2:
				travarsal();
				break;
			case 3:
				reverse();
				cout<<"\n linked list reversed.";
				break;
			case 4:
				addAtFirst();
				break;
			case 5:
				addAfterPosition();
				break;
			case 6:
				search();
				break;
			case 7:
				delete_1st();
				cout<<"\n node deleted from first.";
				break;
			case 8:
				delete_last();
				cout<<"\n node deleted from last.";
				break;
			case 9:
				deleteAtPos();
				break;
			case 10:
				exit(0);
			default:
				cout<<"\n invalid choice.";
		}
	}
}
void addnode()
{
	nptr=new node;
	cout<<"\n enter element in the node:";
	cin>>nptr->info;
	if(start==NULL)
	{
		start=nptr;
		nptr->link=start;
	}
	else
	{
		ptr=start;
		while(ptr->link!=start)
		{
			ptr=ptr->link;
		}
		ptr->link=nptr;
		nptr->link=start;
	}
	cout<<"\n new node added.";
}
void travarsal()
{
	if(start==NULL)
	{
		cout<<"\n linked list doesn't exist.";
	}
	ptr=start;
	while(ptr->link!=start)
	{
		cout<<ptr->info<<ends;
		ptr=ptr->link;
	}
	cout<<ptr->info;
}
void reverse()
{
	struct node *prv,*curr,*next;
	prv=NULL;
	next=NULL;
	curr=start;
	while(curr!=start)
	{
		next=curr->link;
		curr->link=prv;
		prv=curr;
		curr=next;
	}
	start=prv;
	//cout<<"\n linked reversed.";
}
void addAtFirst()
{
	nptr=new node;
	cout<<"\n enter element in the node:";
	cin>>nptr->info;
	if(start==NULL)
	{
		start=nptr;
		nptr->link=start;
	}
	else
	{
		ptr=start;
		while(ptr->link!=start)
		{
			ptr=ptr->link;
		}
		nptr->link=start;
		ptr->link=nptr;
		start=nptr;
	}
	cout<<"\n new node added at first.";
}
void addAfterPosition()
{
	int pos,count=1;
	nptr=new node;
	if(start==NULL)
	{
		cout<<"\n linked list doesn't exist.";
	}
	else
	{
		cout<<"\n enter the position to add node:";
		cin>>pos;
		cout<<"\n enter element in the node:";
	    cin>>nptr->info;
	    ptr=start;
		while(count!=pos)
		{
			ptr=ptr->link;
			count++;
		}
		nptr->link=ptr->link;
		ptr->link=nptr;
		cout<<"\n new node added.";
	}
}
void search()
{
	ptr=start;
	int item,flag=0;
	cout<<"\n enter the element to search:";
	cin>>item;
	while(ptr->link!=start)
	{
		if(ptr->info==item)
		{
			flag=1;
		}
		ptr=ptr->link;
	}
	if(ptr->info==item)
	{
		flag=1;
	}
	if(flag==1)
	{
		cout<<"\n item found.";
	}
	else
	{
		cout<<"\n item not found.";
	}
}
void delete_1st()
{
	struct node *save;
	if(start==NULL)
	{
		cout<<"\n underflow.";
	}
	else
	{
		ptr=start;
		start=start->link;
		while(ptr->link!=start)
		{
			ptr=ptr->link;
		}
		ptr->link=start;		
	}
}
void delete_last()
{
	struct node *save;
	if(start==NULL)
	{
		cout<<"\n underflow.";
	}
	ptr=start;
	while(ptr->link!=start)
	{
		save=ptr;
		ptr=ptr->link;
	}
	save->link=start;
}
void deleteAtPos()
{
	struct node *save;
	int pos,count=1;
	if(start==NULL)
	{
		cout<<"\n underflow.";
	}
	else
	{
		cout<<"\n enter the position to delete element:";
		cin>>pos;
		ptr=start;
		while(count!=pos)
		{
			save=ptr;
			ptr=ptr->link;
			count++;
		}
		save->link=ptr->link;
		cout<<"\n node deleted.";
	}
}
