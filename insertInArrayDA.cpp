#include<iostream>
using namespace std;
int main()
{
	int pos,i,val;
	cout<<"\n enter the positon to insert:";
	cin>>pos;
	cout<<"\n enter the vale:";
	cin>>val;
	int a[5]={3,4,1,6,8};
	for(i=4;i<pos;i++)  //for genaral term   // for(i=n-1;i<pos-1;i++)
	{
        a[i+1]=a[i];
	}
	a[pos]=val;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	
}
