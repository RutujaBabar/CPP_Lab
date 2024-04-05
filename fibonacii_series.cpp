#include<iostream>
using namespace std;



int main()
{	
	int count,t1=0,t2=1,next;
	cout<<"enter the count: ";
	cin>>count;
	
	cout<<t1<<" "<<t2<<" ";
	
	for(int i=0;i<count-2;i++)
	{	
	    next=t1+t2;
	    t1=t2;
	    t2=next;
		
		cout<<t2<<" ";
		
			
	}
	
	
	return 0;
}
