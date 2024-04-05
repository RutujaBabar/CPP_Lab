#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"enter the size of array "<<endl;
	cin>>n;
	int a[n],b[n];
	cout<<"enter the elements "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]==a[j])
			{
				b[i]=a[i];
			}
			else
			{
				
			}
		}
	}
	return 0;
}
