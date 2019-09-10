#include<iostream>
using namespace std;
int main()
{
	int i,n,j,temp;
	cout<<"\n enter the size of the array:";
	cin>>n;
	int a[n];
	cout<<"\n enter random element in the array:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-1-i;j++)//this loop won't compare values that already are matched
	{
		if(a[j]>a[j+1])
		{
		    temp=a[j];
		    a[j]=a[j+1];
		    a[j+1]=temp;
		}
	}
	
    }
	cout<<"\n after sorting elements are:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
