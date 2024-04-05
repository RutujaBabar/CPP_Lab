#include<iostream>

using namespace std;

int main()
{
	int num , rev=0,n,rem=0;
	cout<<"Enter the number "<<endl;
	cin>>num;
	n=num;
	
	while(num>0){
	
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;	
}
		if(n==rev)
	{
		cout<<n <<"is palindome";
	}
	else
	
		cout<<n <<"is not palindome";
	
}
