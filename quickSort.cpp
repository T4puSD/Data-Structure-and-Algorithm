#include<iostream>
using namespace std;
void quick(int *,int,int);
int n,l,u,i,j;
int main()
{
	
	cout<<"\n enter the size of the array:";
	cin>>n;
	int a[n];
	cout<<"\n enter the elements:";
	for(int i=0;i<n-1;i++)
	{
		cin>>a[i];
	}
	l=0;
	u=n-1;
	quick(a,l,u);
	cout<<"\n aftre quick sort elements:";
	for(int i=0;i<n-1;i++)
	{
		cout<<a[i]<<ends;
	}
}
void quick(int a[],int l,int u)
{
	int temp,p;
	if(l<u)
	{
		p=a[l];
		i=l;
		j=u;
		while(i<j)
		{
			while(a[i]<=p && i<j)
			i++;
			while(a[j]>p && i<=j)
			j--;
			if(i<=j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[j];
		a[j]=a[l];
		a[l]=temp;
		quick(a,l,j-1);
		quick(a,j+1,u);
	}
}
