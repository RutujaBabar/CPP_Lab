#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	int num1,num2,i,count,digit,num,result=0;
	cout<<"enter first num: "<<endl;
	cin>>num1;
	cout<<"enter second num: "<<endl;
	cin>>num2;
	
	cout<<"armstrong numbers between "<<num1<<"and "<<num2<<endl;
	
	for(i=num1;i<=num2;i++)
	{
		count=0;
		num=i;
	
	
	while(num>0)
	{
		++count;
		num=num/10;
	}
	result=0;
	num=i;
	while(num>0)
	{
		digit=num%10;
		result=result+pow(digit,count);
		num=num/10; 
			
		
	}
	
	if(result==i)
	{
		cout<<i<<",";
	}
}
	return 0;
}
