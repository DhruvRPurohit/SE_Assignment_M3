/* 3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables. */

#include<iostream>

using namespace std;

class car{
	string company;
	string model;
	int year;
	
	public:
		car (string c,string m,int y )
		{
			company = c;
			model = m;
			year = y;
		}
		void display();
		
};

void car ::	display()
{
	cout<<"\n\n\tCompany :"<<company;
	cout<<"\n\n\tModel :"<<model;
	cout<<"\n\n\tYear :"<<year;
}
main()
{
	string com,mo;
	int year;
	
	cout<<"\n\n\tEnter Car Company :";
	cin>>com;
	cout<<"\n\n\tEnter Car Model :";
	cin>>mo;
	cout<<"\n\n\tENter Year :";
	cin>>year;
	car c1(com,mo,year);
	
	c1.display();
	
}
