#include<iostream>
using namespace std;


int main()
{
	int n,onum,result=0,rem;
	cout<<"enter a no.";
	cin>>n;
	onum=n;
	
	while(onum!=0)
	{
		rem=onum%10;
		result=result+(rem*rem*rem);
		onum=onum/10;
			
		
	}
	
	if(result==n)
	{
		cout<<"no. is armstrong "<<result;
	}
	else
	{
	
	 cout<<"not an armstrong no. ";
    }
	return 0;
}
