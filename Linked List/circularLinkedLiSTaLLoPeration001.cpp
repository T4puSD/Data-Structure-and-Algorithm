#include<iostream>
using namespace std;
struct node
{
	int info;
	struct node *link;
}*start,*ptr,*nptr;
void addnode();
void travarsal();
void reverse();
void addAtFirst();
void addAtPosition();
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
		cout<<"\n\n5.Add At Position.";
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
				cout<<"\n new node added.";
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
				cout<<"\n new node added at first.";
				break;
			case 5:
				addAtPosition();
				cout<<"\n new node added.";
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
				cout<<"\n node deleted.";
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
	if(start==NULL)
	{
		int item;
		cout<<"\nlink list is empty.";
		cout<<"\n enter item in list:";
		cin>>item;
		nptr=new node;
		nptr->info=item;
		start=nptr;
		nptr->link=start;
	}
	else
	{
		int item;
		cout<<"\n enter item in rear end:";
		cin>>item;
	    nptr=new node;
	    nptr->info=item;
	    ptr=start;
	    while(ptr->link!=start)
	    {
	    	ptr=ptr->link;
		}
		ptr->link=nptr;
		nptr->link=start;
		
		
	}
}
void travarsal()
{
	if(start==NULL)
	{
		cout<<"\n link list is empty.";
		
	}
	else
	{
		ptr=start;
		while(ptr->link!=start)
		{
			cout<<ptr->info<<ends;
			ptr=ptr->link;
		}
		cout<<ptr->info;
	}
	
}
void reverse()
{
	struct node *prv,*current,*next;
	if(start==NULL)
	{
		cout<<"\n linked list is empty.";
	}
	else
	{
		next=NULL;
		prv=NULL;
		current=start;
		while(current!=NULL)
		{
			next=current->link;
			current->link=prv;
			prv=current;
			current=next;
		}
		start=prv;
		cout<<"\n linked reversed.";
		
	}
}
void addAtFirst()
{
	int item;
	cout<<"\n enter your item at first:";
	cin>>item;
	nptr=new node;
	nptr->info=item;
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
		start=nptr;
	}
	
}
void addAtPosition()
{
	int item,pos,count=1;
	nptr=new node;
	if(start==NULL)
	{
		cout<<"\n linked list doesn't exist.";
	}
	else
	{
		cout<<"\n enter the position:";
	    cin>>pos;
		cout<<"\n enter the element:";
	    cin>>item;
	    nptr->info=item;
	    ptr=start;
		while(count!=pos)  //u can also do it with for loop
		                         //for(int i=0;i<pos;i++)
		{                        //{
			ptr=ptr->link;           //ptr=ptr->link;
			count++;             //}      
		}
	    nptr->link=ptr->link;   //nptr->link=ptr->link;
	    ptr->link=nptr;         //ptr->link=nptr;
	    //ptr=nptr;
	}
}
void search()
{
	int item,flag=0,flag1=0;
	cout<<"\n enter item to be search:";
	cin>>item;
	ptr=start;
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
		flag1=1;
	}
	
	if(flag==1||flag1==1)
	{
		cout<<"\n element found.";
	}
	else
	{
		cout<<"\n element not found";
	}
	
}
void delete_1st()
{
	ptr=start;
	if(start==NULL)
	{
		cout<<"\n underflow.";
	}
	else
	{
		ptr=start;
		start=ptr->link;
	}
	
}
void delete_last()
{
	
	struct node *save;
	if(start==NULL)
	{
		cout<<"\n underflow.";
	}
	else
	{
		ptr=start;
		while(ptr->link!=start)
		{
			save=ptr;
			ptr=ptr->link;
		}
		save->link=start;
	}
}
void deleteAtPos()
{
    struct node *save;
	int pos;
	if(pos==1)
	cout<<"\n enter the position you want to delete item:";
	cin>>pos;
	if(start==NULL)
	{
		cout<<"\n linked list doesn't exist.";
	}
	else
	{
		ptr=start;
		for(int i=1;i<pos;i++)
		{
			save=ptr;
			ptr=ptr->link;
		}
		save->link=ptr->link;
	}
}
