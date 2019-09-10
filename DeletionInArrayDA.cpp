#include<iostream>
using namespace std;
int main()
{
	int pos,i,val;
	cout<<"\n enter the positon to delete value:";
	cin>>pos;
	
	int a[5]={3,4,1,6,8};
	for(i=pos+1;i<5;i++)  //for genaral term   // for(i=pos+1;i<n-1;i++)
	{
        a[i-1]=a[i];
	}
	for(i=0;i<4;i++)
	{
		cout<<a[i]<<endl;
	}
	
}
