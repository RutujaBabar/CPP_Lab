#include<iostream>

using namespace std;

int main()
{
	int n=123,result=0,rem,digit=100;
	 
	 while(n!=0)
	 {
	 	rem=n/digit;
	 	result=rem*digit;//100
	 	n=n-result;//23
	 	//cout<<n<<endl;
	 	digit=digit/10;//10
	 	
	 	cout<<result<<"+";//100
	 	
	 /*	rem=n%10;
	 	result=result+(rem*digit);
	 	cout<<result<<"+";
	 	n=n/10;
	 	digit=digit*10;*/
	 	
	 	
	 }
		cout<<"0";
//	cout<<;
	
	
	return 0;
}
