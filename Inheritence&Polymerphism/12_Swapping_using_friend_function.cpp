/* 12.Write a programto swap the two numbers using friend function
without using third variable */

#include<iostream>

using namespace std;

class Swapping{
	int a,b;
	
	public:
			Swapping(int x,int y)
			{
				a=x;
				b=y;
			}
			void display()
			{
				cout<<"\n\n\tA : "<<a;
				cout<<"\n\n\tB : "<<b;
			}
			friend void change(Swapping &);
};

void change(Swapping &s)
{
	s.a*=s.b;
	s.b = s.a / s.b;
	s.a = s.a / s.b;
}

main()
{
	int a,b;
	cout<<"\n\n\tEnter the A : ";
	cin>>a;
	cout<<"\n\n\tEnter the B : ";
	cin>>b;
	
	class Swapping s1(a,b);
	
	cout<<"\n\n\tBefore Swapping................";
	s1.display();
	
	change(s1);
	
	cout<<"\n\n\tBefore Swapping................";
	s1.display();
}
