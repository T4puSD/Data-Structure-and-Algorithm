#include<iostream>
using namespace std;
void max_heap(int *,int);
int main()
{
	int n;
	cout<<"\n enter the size of the array:";
	cin>>n;
	int a[n];
	cout<<"\n enter the elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max_heap(a,n);
	cout<<"\n min heap is:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<ends;
	}
}
void max_heap(int a[],int n)
{
	int val,k,par,i;
	for(i=1;i<n;i++)
	{
		val=a[i];
		k=i;
		par=(k-1)/2;
		while(a[par]>val&&k>0)
		{
			a[k]=a[par];
			k=par;
			par=(k-1)/2;
		}
		a[k]=val;
	}
}
