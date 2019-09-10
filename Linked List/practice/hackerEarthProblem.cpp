#include<iostream>
using namespace std;
struct Str
{
	string info;
	struct Str *link;
}*top=NULL,*nptr;
int main()
{
	int N,M;
	cin>>N>>M;
	for(int i=0;i<N-1;i++)
	{
		nptr=new Str;
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
	if(N>M)
	{
		for(int i=0;i<M;i++)
		{
			if(top==NULL)
			{
				cout<<"Stack-Empty ";
			}
			else
			{
			cout<<top->info<<ends;
			top=top->link;
		    }
		}
	}
	else if(N<M)
	{
		for(int i=0;i<N-1;i++)
		{
			if(top==NULL)
			{
				cout<<"Stack-Empty ";
			}
			else
			{
				cout<<top->info;
				top=top->link;
			}
		}
	}
}
