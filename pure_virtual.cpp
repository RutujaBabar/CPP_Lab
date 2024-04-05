#include<iostream>


using namespace std;

class shape  ////Abstract class
{ 
	
	public:
		float a;
	
		
		virtual void area()=0;// pure virtual function
			
		
		void display()
		{
			cout<<"inside shape :"<<endl;
			
		}
		    
		
	
	
};

class circle:public shape{

	public:
	
		
		void area()
		{	
		
			int r;
		   cout<<"enter radius: "<<endl;
		   cin>>r;	
			a=3.14f*(r*r);
				
		}
		void display()
		{
			
			cout<<"area of circle is: "<<a<<endl;
		}
		
}; 
class rectangle:public shape{

	public:
	
		
		void area()
		{	int l,b;

		   cout<<"enter length and breadth "<<endl;
		   cin>>l>>b;	
			a=l*b;
				
		}
		display(){
			
			cout<<"area of rectangle is: "<<a<<endl;
		}
		
}; 

class square:public shape{

	public:

		
		void area()
		{	int l;

		   cout<<"enter length of side of square "<<endl;
		   cin>>l;	
			a=l*l;
				
		}
		display(){
			
			cout<<"area of square is: "<<a<<endl;
		}
};


int main()
{
	// shape s;  can't create object of pure virtual class
	circle s;
	s.area();
	s.display();
	rectangle r;
	r.area();
	r.display();
	square u;
	u.area();
	u.display();
	
	
	
	
	
}
