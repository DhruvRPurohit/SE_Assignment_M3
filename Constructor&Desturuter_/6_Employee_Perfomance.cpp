/* 6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructo */

#include<iostream>

using namespace std;

class employee{
	
	string name;
	int id;
	int salary;
	
	public:
		employee(string na,int i,int sal)
		{
			name=na;
			id=i;
			salary=sal;
		}
		void performance()
		{
			int h;
			cout<<"\n\n\tEnter the the Hike you want give on perfomance : ";
			cin>>h;
			h = salary * h /100;
			salary += h;
			cout<<"\n\n\tYour Perfomance Based Increment is "<<h<<".\n";
		}
		
		void display(){
			cout<<"\n\n\tEmployee Data : \n";
			cout<<"\n\tEmploee ID : "<<id;
			cout<<"\n\tEmployee Name : "<<name;
			cout<<"\n\tEmployee salary : "<<salary;
		}
};

main()
{
	int i,s;
	string na;
	cout<<"\n\n\tEnter the Employee id : ";
	cin>>i;
	cout<<"\n\n\tEnter the Name : ";
	cin>>na;
	cout<<"\n\n\tEnter the sal : ";
	cin>>s;
	class employee e1(na,i,s);
	e1.performance();
	e1.display();
}
