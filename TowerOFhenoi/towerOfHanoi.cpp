/*TOWER OF HANOI*/
#include<iostream>
using namespace std;
int count=0;
void Toh(int n,char beg, char aux, char end);
int main()
{
	int n;
	cout<<"\n enter the no of element of the disk:";
	cin>>n;
	Toh(n,'A','B','C');
	cout<<count<<" steps requried.";
}
void Toh(int n, char beg, char aux, char end)
{
	if(n==1)
	{
		cout<<"move disk form "<<beg<<" to "<<end<<endl;
		count++;
		return;
	}
	else
	{
		while(n!=0)
		{
		
		Toh(n-1,beg,end,aux);
		cout<<"move disk from "<<beg<<" to "<<end<<endl;
		count++;
		n--;
		}
	}
}
