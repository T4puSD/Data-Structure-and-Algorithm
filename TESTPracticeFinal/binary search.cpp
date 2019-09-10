#include<iostream>
using namespace std;
int main()
{
	int size,val,mid,beg,end;
	cout<<"\n enter the size of the array:";
	cin>>size;
	int arr[size];
	cout<<"\n enter the elements:";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		
	}
	cout<<"\n you have enter the array:";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<ends;
	}
	cout<<"\n enter the element to search:";
	cin>>val;
	beg=0;
	end=size-1;
	mid=(beg+end)/2;
	while(beg>=end&&arr[mid]!=val)
	{
		if(val>arr[mid])
		{
			beg=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=(beg+end)/2;
	}
	if(arr[mid]==val)
	{
		cout<<"\n element found.";
	}
	else
	{
		cout<<"\n element not found.";
	}
}
