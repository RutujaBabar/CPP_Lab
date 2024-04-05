#include<iostream>

using namespace std;

int main()
{
	int s,i,n, m,sum=0;
	
//	int* marks=new int[m];
//	char* name=new char[n];
	cout<<"enter the number of subjects ";
	cin>>s;
	cout<<"enter the number of characters for name ";
	cin>>n;
	
	int* marks=new int[m];
	char* name=new char[n];
	cout<<"enter the name "<<endl;
	cin>>name;
	
	for(i=0;i<s;i++)
	{
		cout<<"enter the marks for subject "<<i+1<<endl;
		cin>>marks[i];
	}
	
	for(i=0;i<s;i++)
	{
		sum=sum+marks[i];
	}
	
	float avg=(float)sum/s;
	
	cout<<"name is "<<name<<endl;
	cout<<"average is "<<avg<<endl;
	

	
	
	delete []marks;
	delete []name;
return 0;
}
