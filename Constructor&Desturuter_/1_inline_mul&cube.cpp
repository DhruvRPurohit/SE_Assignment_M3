/* 1. Write a program to find the multiplication values and the cubic values using
inline function */

#include<iostream>
using namespace std;

	inline int mul(int a, int b)
	{
		return a * b;	
	}	
	inline int cube(int x)
	{
		return x * x* x;
	}

main()
{
	int n1,n2,n3;
	
	cout<<"\n\n\tEnter the two number for the multipication : ";
	cin>>n1>>n2;
	
	cout<<"\n\n\tEnter any value :";
	cin>>n3;
	
	int c,m;
	
	m=mul(n1,n2);
	c=cube(n3);
	
	cout<<"\n\n\t"<<n1<<" X "<<n2<<" = "<<m;
	cout<<"\n\n\tCube of "<<n3<<" is : "<<c;
	
}

 
