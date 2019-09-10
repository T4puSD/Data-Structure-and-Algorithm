#include<iostream>
using namespace std;
int main()
{
	int i,j,x,count,flag=0,ld=0;
	cout<<"\n enter the size of the array:";
	cin>>x;
	int a[x];
	for (i=0;i<x;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<x;i++)
	{
		flag=0;
	  for(j=i+1;j<x;j++)
	  {
	  	if(a[i]>a[j])
	     {
	     	flag=1;
	        if(flag==1)
	        {
	        	break;
			}
			else
			{
				flag=0;
			}
		 }
	  }
	  if(flag==1)
	  {
	  	ld=a[i];
	  	cout<<ld<<ends;
	  	count++;
	  }
	}
	
	cout<<endl;
	cout<<count;
}
