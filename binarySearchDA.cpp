#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int mid,end,beg,val;
	cout<<"\n enter value to be searched:";
	cin>>val;
	beg=0;
	end=4;
	mid=(beg+end)/2;
	while(beg<=end && a[mid]!=val)
	{
		if(a[mid]>val)
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
		mid=(beg+end)/2;
	}
	if(a[mid]==val)
	{
		cout<<"\n value found.";
	}
	else
	{
		cout<<"\n value not found.";
	}
}
