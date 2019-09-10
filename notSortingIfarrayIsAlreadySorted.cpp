#include<iostream>
using namespace std;
int main()
{
	int i,x,j,temp,flag=0;
	cout<<"\n enter size of the element:";
	cin>>x;
	int a[x];
	cout<<"\n enter the elements in the array:";
	for(i=0;i<x;i++)
	{
		cin>>a[i];
	}
	cout<<"\n array is:";
	for(i=0;i<x;i++)
	{
		cout<<a[i]<<ends;
	}
	cout<<endl;
	for(i=0;i<x-1;i++)
	{

		for(j=0;j<x-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		//cout<<"flag="<<flag<<endl;
		if(flag==0)
		{
			cout<<"\n array is already sorted.";
			return 0;
		}
		
	}
		
	cout<<"\n after sorting arra is:";
	for(i=0;i<x;i++)
	{
		cout<<a[i]<<ends;
	}
	
}
