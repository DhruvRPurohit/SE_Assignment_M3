/*5. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.*/


#include<iostream>
using namespace std;

class triangle{
	
	int side1,side2,side3;
	
	public:
		triangle(double a,double b,double c)
		{
			side1 = a;
			side2 = b;
			side3 = c;
		}
		
		void check();
};

void triangle :: check()
{
	if (side1 == side2 && side2 == side3)
	{
		cout<<"\n\n\tThis triangle is Equilateral .";
	}
	else if (side1 == side2 || side2 == side3 ||side3 == side1)
	{
		cout<<"\n\n\tThis triangle is isosceles .";
	}
	else
	{
		cout<<"\n\n\tThis triangle is Scalene .";
	}
}

main()
{
	int a,b,c;
	cout<<"\n\n\tEnter the three side of triangle :";
	cin>>a>>b>>c;
	
	class triangle t1(a,b,c);
	t1.check();
	
}
