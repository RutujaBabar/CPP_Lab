#include<iostream>
using namespace std;

int main()
{
	int i=0,j=0,n,k;
	cout<<"enter the size of array "<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the elements "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
			//for(j=i+1;j<n;j++)
			//{
				if(a[i]==a[i+1])
				{
					for(k=i+1;k<n;k++)
					{
					a[k]=a[k+1];	
					}	
					n--;
					i--;
				}
			//}
	}
	
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<" ";
	}
	
	
	}
