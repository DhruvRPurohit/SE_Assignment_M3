/* 2. Write a C++ Program to find Area of Rectangle using inheritance*/

#include<iostream>

using namespace std;

class shape{
	protected:
		int height;
		int width;
		
	public:
		void getarea(int h, int w)
		{
			height = h;
			width = w;
		}
};

class Rectangle : public shape{
	
	public:
		int area()
		{
			return height * width;
		}
};

main()
{
	Rectangle r1;
	
	int a,b;
	
	cout<<"\n\n\tEnter the Height Rectangle : ";
	cin>>a;
	cout<<"\n\n\tEnter the Width Rectangle : ";
	cin>>b;
	r1.getarea(a,b);
	int area = r1.area();
	
	cout<<"\n\n\tArea of the Rectangle : "<<area;
	
}
