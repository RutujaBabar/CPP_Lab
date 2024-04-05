#include<iostream>

using namespace std;

int main()
{	
int n,i;
     char ch,character;
    cout<<"enter the length of string "<<endl;
    cin>>n;
    char a[n];
	cout<<"enter the string ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<"enter the character you want to replace "<<endl;
	cin>>ch;
	cout<<"enter the character which you want to give "<<endl;
	cin>>character;
	
		for(int i=0;i<=n;i++)
		{
			if(a[i]==ch)
			{
				a[i]=character;
			}
		}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
	
	
}
