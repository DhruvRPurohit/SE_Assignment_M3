/* 13.Write a program to find the max number from given two numbers
using friend function */

#include<iostream>

using namespace std;

class MAX{
	int a,b;
	
	public:
			MAX(int x , int y)
			{
				a = x;
				b = y;
			}
			
			void display()
			{
				cout<<"\n\n\tA : "<<a;
				cout<<"\n\n\tB : "<<b;
			}
			
			friend void check (MAX &);
};

void check(MAX &m)
{
	if (m.a == m.b)
	{
		cout<<"\n\n\tA and B are Equal.";
	}
	else if(m.a > m.b)
	{
		cout<<"\n\n\tA is Max";
	}
	else{
		cout<<"\n\n\tB is Max";
	}
}

main()
{
	int a,b;
	cout<<"\n\n\tEnter the A : ";
	cin>>a;
	cout<<"\n\n\tEnter the B : ";
	cin>>b;
	
	MAX m1(a,b);
	
	m1.display();
	
	check(m1);
}
