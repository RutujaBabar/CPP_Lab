///////User Defined String//////

#include<iostream>

using namespace std;

int ustrlen(char* b)
{
	int len=0;
	
	while(*b!='\0')
	{
		
		len++;
		b++;
	}
	return len;
}

int main()
{
int len;
char a[10];

cout<<"Enter a string"<<endl;
cin>>a;
len=ustrlen(a);

cout<<"length is : "<<len;


	
	return 0;
}
