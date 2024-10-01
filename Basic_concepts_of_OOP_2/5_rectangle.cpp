/* 5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter. */

#include<iostream>

using namespace std;

class Rectangle{
	float l,w;
	
	public:
		void getdata();
		float area()
		{
			return l * w;
		}
		float perimeter()
		{
			return (l + w) * 2;	
		}
};

void Rectangle :: getdata()
{
	cout<<"\n\n\tEnter the Length of Rectangle : ";
	cin>>l;
	cout<<"\n\n\tEnter the Width of Rectangle : ";
	cin>>w;
}

main()
{
	
	class Rectangle r;
	r.getdata();
	cout<<"\n\n\tArea Of Rectangle :"<<r.area();
	cout<<"\n\n\tperimeter of Rectangle :"<<r.perimeter();

}



