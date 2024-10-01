/* 11.Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area */

#include<iostream>

using namespace std;

class Calculate{
	
	double height,width;
	
	public:
		Calculate(double h, double w)
		{
			height=h;
			width=w;
		}
		
		float area(double heigth,double width)
		{
			return height * width;		
		}
		float area(float val,double height,double width)
		{
			return val * height * width;
		}

		float area(double height)
		{
			return 3.14 * height * height ;
		}
};

main()
{
	
	double h,w;
	cout<<"\n\n\tEnter the height : ";
	cin>>h;
	cout<<"\n\n\tEnter the width : ";
	cin>>w;
	Calculate c1(h,w);
	
	float ans;
	ans=c1.area(h,w);
	cout<<"\n\n\tArea of Rectangle is : "<<ans;
	
	
	ans = c1.area(0.5,h,w);
	cout<<"\n\n\tArea of Triangle is : "<<ans;

	int r;
	cout<<"\n\n\n\tEnter the Radius (for Circle) : ";
	cin>>r;
	float ans1 = c1.area(r);
	cout<<"\n\n\tArea of Cicle is : "<<ans1;
	
	
}
