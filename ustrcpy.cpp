#include<iostream>

using namespace std;

void ustrcpy(char* q , char* p)
{
 while(*p!='\0')
 {
 	*q=*p;
 	p++;
 	q++;
 }
 *q='\0';
}

int main()
{

char a[20];
char b[20];

cout<<"Enter a string"<<endl;
cin>>a;
ustrcpy(b,a);
cout<<"copied string is "<<b<<endl;



	
	return 0;
}
