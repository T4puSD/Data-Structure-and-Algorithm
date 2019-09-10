#include<iostream>
using namespace std;
int main()
{
	int i,j,min,x;
	cout<<"\n enter the size of the array:";
	cin>>x;
	int a[x];
	cout<<"\n enter the elements in the array";
	for(i=0;i<x;i++)
	{
		cin>>a[i];
	}
	
	
	for(i=0;i<x;i++)
	{
		min=i;
		
		for(j=i+1;j<x;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		
		if(min!=i)
		{
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	cout<<"after selection sorting array is:";
	for(i=0;i<x;i++)
	{
		cout<<a[i]<<ends;
	}
}
