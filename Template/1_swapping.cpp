/* 1. Write a program of to swap the two values using template */

#include<iostream>

using namespace std;


template <class t>
void Swapping(t  x,t  y)
{
	x=x+y;  
	y=x-y;   // swapping logic  
	x=x-y;  
	cout<<"\n\n\tA : "<<x;
	cout<<"\n\n\tB : "<<y;
}

template <class T>
void display(T x, T y)
{
	cout<<"\n\n\tA : "<<x;
	cout<<"\n\n\tB : "<<y;
}


main()
{
	int a,b;
	cout<<"\n\n\tEnter A : ";
	cin>>a;
	cout<<"\n\n\tEnter B : ";
	cin>>b;
	cout<<"\n\n\tBefore Swapping........";
	display(a,b);
	cout<<"\n\n\tAfter Swapping............ ";	 
	Swapping(a,b);	
}

