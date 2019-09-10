#include<iostream>
using namespace std;
//struct node *start,*ptr,*nptr;
int item,count;
struct node
{
	int info;
	struct node *link;
	//struct node *save;
	
}*start,*ptr,*nptr;
void traversal()
{
	if(start==NULL)
	{
      cout<<"\n link list doesn't exist.";
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

void insert_atend()
{
	nptr=new node;
	cout<<"\n enter the vlaue you want to insert:";
	cin>>item;
	nptr->info=item;
	if(start==NULL)
	{
	    start=nptr;
		nptr->link=start;
		//start=nptr;
	}
	else
	{
		//nptr->link=start;
		ptr=start;
		while(ptr->link!=start)
		{
			ptr=ptr->link;
			
		}
		ptr->link=nptr;
		nptr->link=start;
	}
	
}
void insertion_atbeg()
{
	nptr=new node;
	cout<<"\n enter the vlaue you want to insert:";
	cin>>item;
	nptr->info=item;
	if(start==NULL)
	{
		
		nptr->link=start;
		start=nptr;
	}
	else
	{
		ptr->link=nptr;
		nptr->link=start;
		start=nptr;
	}
}
void insertion_atpos()  
{
	int pos,item1;
	nptr=new node;
	cout<<"\n which position you want to inset the element:";
	cin>>pos;
	cout<<"\n enter the item:";
	cin>>item1;
	if(start==NULL)
	{
      cout<<"\n link list doesn't exist.";
	}
	else
	{
		ptr=start;
		for(int i=1;i<pos;i++)
		{
			ptr=ptr->link;
		}
		
			nptr->link=ptr->link;
			ptr->link=nptr;
			nptr->info=item1;
			
	}
	
}
void search()
{
	int item,flag=0;
	cout<<"\n enter the element to search:";
	cin>>item;
	if(start==NULL)
	{
		cout<<"\n link list is emptly.";
	}
	else
	{
	    ptr=start;
		while(ptr!=NULL)
		{
			if(ptr->info==item)
			{
				flag=1;
				break;
			}
			else
		   {
			    ptr=ptr->link;
		   }
			
		
	    }
	    if(flag==1)
	    {
	    	cout<<"\n element found.";
		}
		else
		{
			cout<<"\n element not found.";
		}
    }
}
void delete_1st()
{
	if(start==NULL)
	{
		cout<<"\n underflow conditon.";
	}
	
	else
	{
	    start=start->link;
    }
}
void delete_last()
{
	struct node *save;
	if(start==NULL)
	{
		cout<<"\n underflow condition.";
	}
	else
	{
		ptr=start;
		while(ptr->link!=NULL)
		{
			save=ptr;
			ptr=ptr->link;
		}
		save->link=NULL;
	}
}
/*void delete_pos()
{
	int pos;
	cout<<"\n enter the position you want to delete item:";
	cin>>pos;
	if(start==NULL)
	{
		cout<<"\n linked list doesn't exist.";
	}
	else
	{
		ptr=start
		while(ptr!=NULL)
		{
			for 
		}
	}
}*/

int main()
{
	int ch;
	do
	{
		cout<<"\n=============Linked List Operation==================";
		cout<<"\n1.Traverse";
		cout<<"\n2.Insert At Begining";
		cout<<"\n3.Insert At End";
		cout<<"\n4.Inset After a position";
		cout<<"\n5.Search";
		cout<<"\n6.Delete At Beg";
		cout<<"\n7.Delete At end";
		cout<<"\n8.exit";
		cout<<"\n====================================================";
		cout<<"\n\ninsert your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				traversal();
				break;
			case 2:
				insertion_atbeg();
				cout<<"\n value inserted.";
				break;
			case 3:
				insert_atend();
				cout<<"\n value inserted.";
				break;
			case 4:
				insertion_atpos();
				cout<<"\n value inserted.";
				break;
			case 5:
				search();
				break;
			case 6:
				delete_1st();
				cout<<"\n value deleted.";
				break;
			case 7:
				delete_last();
				cout<<"\n value deleted.";
				break;
			case 8:
				exit(0);
			default:
				cout<<"\n Wrong choice.";
			
		}
	}
	while(1);
}
