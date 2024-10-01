/*4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/

#include<iostream>
#include<cmath>  //for M_PI

using namespace std;

class circle{
	double radius;
		public:
			double area();
			double circumference();
			void getdata()
			{
				cout<<"\n\n\tEnter the radius of circle : ";
				cin>>radius;
			}
};

double circle :: area()
{
	return M_PI * radius * radius;	
} 

double circle :: circumference()
{
	return 2 * M_PI * radius;
}

main()
{
	class circle c;
	
	c.getdata();
	cout<<"\n\n\tArea of Circle : "<<c.area();
	cout<<"\n\n\tCircmference of the circle : "<<c.circumference();
}
