#include<iostream>
using namespace std;

int main()
{
	int a[10],n,i,j,temp=0;
	cout<<"enter size of array"<<endl;
	cin>>n;
	cout<<"\n enter the elements of an array "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
				
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
				
		}
	}
		
	}
	cout<<"sorted array is ";
		for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
	
	
	return 0;
}
