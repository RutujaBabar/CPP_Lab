#include<iostream>
using namespace std;

template<class T , int size>


class sort_ele
{
	public:
		int i,j,temp;
		T a[size];
	//	int a[size];
		void insert()
		{   // cout<<"enter size: "<<endl;
		//	cin>>size;
			
			cout<<"enter elements "<<endl;
			for(i=0;i<size;i++)
			{
			cin>>a[i];
			}
			
		}	
		void sort1()
		{
			for(i=0;i<size-1;i++)
			 {
			 	for(j=0;j<size-i-1;j++)
			 	{
			 		if(a[j]>a[j+1])
			 		{ 
			 			temp=a[j];
			 			a[j]=a[j+1];
			 			a[j+1]=temp;
					 }
				 }
	 		 }				
		}
		
		void display()
		{
			cout<<"sorted elemets are "<<endl;
			
			 for(i=0;i<size;i++)
			{
				 cout<<a[i]<<endl;
			}
		}
};

int main()
{
	sort_ele<float,5> se1;
	se1.insert();
	se1.sort1();
	se1.display();
}
