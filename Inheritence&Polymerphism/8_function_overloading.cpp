/* 8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */

#include<iostream>

using namespace std;

class Mathematic{
	
	public:
			void operate(int a,int b)
			{
				cout<<"\n\n\t"<<a<<" + "<<b<<" = "<<a+b;
			}
			
			void operate(int a,int b, char op)
			{
				if( op == '-')
					cout<<"\n\n\t"<<a<<" + "<<b<<" = "<<a+b;
			}
			
			void operate(double x,double y)
			{
				cout<<"\n\n\t"<<x<<" * "<<y<<" = "<<x*y;
			}
			
			void operate(double x, double y ,char op)
			{
				if( op == '/')
					cout<<"\n\n\t"<<x<<" / "<<y<<" = "<<x/y;
			}
			
};

main()
{
	Mathematic m;
	
	int a=10,b=5;
	double x=10.5,y=5;
	
	m.operate(a,b);
	m.operate(a,b,'-');
	m.operate(x,y);
	m.operate(x,y,'/');
}
