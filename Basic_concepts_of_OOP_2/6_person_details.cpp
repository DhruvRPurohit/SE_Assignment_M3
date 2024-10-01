/* 6. Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables. */

#include<iostream>
using namespace std;

class person
{
	string name;
	int age;
	string c;	
	
		public :
			void getdata();
			void setdata(); 
};

void person :: setdata()
{
	cout<<"\n\n\tEnter the name of Person : ";
	cin>>name;
	cout<<"\n\n\tEnter the age :";
	cin>>age;
	cout<<"\n\n\tEnter the countery : ";
	cin>>c;
}

void person :: getdata()
{
	cout<<"\n\n\tName : "<<name;
	cout<<"\n\n\tAge :"<<age;
	cout<<"\n\n\tCountry : "<<c;
}

main()
{
	class person p;
	p.setdata();
	p.getdata();
}


