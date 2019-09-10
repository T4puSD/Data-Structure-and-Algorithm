//maxheap
#include<iostream>
#include<math.h>
using namespace std;
void maxheap(int n);
void minheap(int n);
void heapsort(int );
int *p,n,i,k;
int main()
{
	int *p,n;
	cout<<"\n enter the size of the array:";
	cin>>n;
	p=new int[n];
	for(i=0;i<n;i++)
	{
		cout<<"\n enter "<<i+1<<"st element:";
		cin>>*(p+i);
	}
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<ends;
	}
	cout<<"\nafter heapsort:";
	heapsort(n);
	return 0;
}
void heapsort()
{
	for(i=0;i>0;i--)
	{
		int temp;
		temp=*(p+i);
		*(p+i)=*(p+0);
		*(p+0)=temp;
		maxheap(i);
	}
}
void maxheap(int n)
{
	int val,par;
	for(int i=1;i<n;i++)
	{
		val=*(p+i);
		k=i;
		par=floor(k-1/2);
		while((*(p+par)<val)&&k>0)
		{
			*(p+i)=*(p+par);
			k=par;
			par=(k-1/2);
			*(p+k)=val;
		}
		
	}
}
void minheap(int n)
{
	int val,par;
	for(int i=1;i<n;i++)
	{
		val=*(p+i);
		k=i;
		par=floor(k-1/2);
		while((*(p+par)>val)&&k>0)
		{
			*(p+i)=*(p+par);
			k=par;
			par=(k-1/2);
			*(p+k)=val;
		}
		
	}
}
