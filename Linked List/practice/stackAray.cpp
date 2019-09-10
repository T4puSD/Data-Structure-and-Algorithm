#include<iostream>
using namespace std;
int top=-1;
void pop(int size,int stack[]);
void push(int size,int stack[]);
void peek(int stack[]);
int main()
{
	int size,ch;
	cout<<"\n enter the size of the array:";
	cin>>size;
	size=size-1;
	int stack[size];
	while(1)
	{
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
				pop(size,&stack[0]);
				break;
			case 2:
				push(size,&stack[0]);
				break;
			case 3:
				peek(&stack[0]);
				break;
			case 4:
				exit(0);
			default:
				cout<<"\n invalid choice.";
		}
	}
}
void pop(int size,int stack[])
{
	int item;
	if(top==-1)
	{
		cout<<"\n underflow.";
	}
	else
	{
		item=stack[top];
		top--;
	}
	cout<<" item poped:"<<item;
}
void push(int size,int stack[])
{
	if(top==size)
	{
		cout<<"\noverflow.";
	}
	else
	{
	int item;
	cout<<"\n enter the element:";
	cin>>item;
	top++;
	stack[top]=item;
    }
}
void peek(int stack[])
{
	cout<<"\n top item:"<<stack[top];
}
