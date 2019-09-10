#include<iostream>
using namespace std;
int top=-1;
void pop(int size,int stack[]);
void push(int size,int stack[]);
void peek(int stack[]);
int main()
{
	int size;
	cout<<"\n enter the size of the stack:";
	cin>>size;
	size=size-1;
	int stack[size];
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
			pop(size,&stack[0]);
			break;
		case 2:
			push(size,&stack[0]);
			break;
		case 3:
			peek(&stack[0]);
			break;
		case 4:
			return 0;
		default:
			cout<<"\n wrong choice.";
	}
    }
   
} 
void push(int size,int stack[])
{
	int value;
	if(top==size)
	{
		cout<<"\n list is already full";
	}
	else
	{
		top++;
		cout<<"\n enter the value to push:";
		cin>>value;
		stack[top]=value;
		
	}
}
void pop(int size,int stack[])
{
	int item;
	if(top==-1)
	{
		cout<<"list is empty";
	}
	else
	{
		item=stack[top];
		top--;
	}
	cout<<"\nitem: "<<item<<" deleted";
}
void peek(int stack[])
{
	cout<<"\n top of the stack is:"<<stack[top];
}
