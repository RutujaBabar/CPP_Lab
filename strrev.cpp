#include<iostream>
#include<string.h>

using namespace std;

char ustrrev(char* p )
{
//	char q[20];
	int y=0;
	int x=strlen(p)-1;
	
	char q[x+1];
	while(x>=0)
	{
	q[y]=p[x];
	x--;
	y++;	
	}
	q[y]='\0';
cout<<"reversed string is "<<q<<endl;

}

int main()
{
char a[20];
//char* b[20];

cout<<"Enter a string"<<endl;
cin>>a;	

ustrrev(a);

}
