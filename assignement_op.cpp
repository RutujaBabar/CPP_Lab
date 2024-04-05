#include<iostream>
#include<string.h>
using namespace std;

class string1{
	
	int len;
	char* ptr;
	public:
		
		string1(char* sptr)
		{
			len=strlen(sptr);
			ptr=new char[len+1];
			strcpy(ptr,sptr);
		}
		
		string1(string1 &)
		{
		 cout<<"copy constructor is called "<<endl;	
		}
		void display()
		{
			cout<<"length is "<<len<<endl;
			cout<<"string is "<<ptr<<endl;
		}
		
		void operator=(string1 &s)
		{
			cout<<"assignement operator is called "<<endl;
			delete []ptr;
			len=s.len;
			ptr=new char[len+1];
			strcpy(ptr,s.ptr);
		}
		~string1()
		{
			cout<<"distructor is called "<<endl;
		}
};

int main()
{
	string1 s1 ("abc");
	string1 s2("xyz");
	s2=s1;
	
	s2.display();
	s1.display();
}
