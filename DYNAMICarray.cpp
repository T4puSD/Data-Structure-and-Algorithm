#include<iostream>
using namespace std;
int main()
{
	int *p,n;
	cout<<"\n enter the size of the array:";
	cin>>n;
	p=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\n enter "<<i+1<<"st element:";
		cin>>*(p+i);
	}
	for(int i=0;i<n;i++)
	{
		cout<<*(p+i)<<ends;
	}
}
