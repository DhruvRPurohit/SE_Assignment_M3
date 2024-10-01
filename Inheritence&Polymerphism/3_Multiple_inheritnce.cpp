/* 3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance) */

#include<iostream>

using namespace std;

class person{
	protected:
			string name;
			int age;
	
	public:
			
};

class student : public person{
	
	protected:
			float per;
	
	public:
			void sdata(string n,int a, float p)
			{
				name = n;
				age = a;
				per = p;
				display();
			}
			
			void display()
			{
				cout<<"\n\n\tStudent Details : ";
				cout<<"\n\n\tName \t: "<<name;
				cout<<"\n\n\tAge \t: "<< age;
				cout<<"\n\n\tPercentage :"<<per;
			}
};

class teacher : public student{
	
			int sal;
		
	public:
			void tdat(string n,int a, int s)
			{
				name = n;
				age = a;
				sal = s;
				display();
			}
			
			void display()
			{
				cout<<"\n\n\tTeacher Details : ";
				cout<<"\n\n\tName \t: "<<name;
				cout<<"\n\n\tAge \t: "<< age;
				cout<<"\n\n\tSalary :"<<sal;
			}			
	
};

main()
{
	class teacher s1;
	
	string name;
	int age,sal;
	float per;
	
	cout<<"\n\n\tEnter Teacher Data :";
	cout<<"\n\n\tEnter your name : ";
	cin>>name;
	cout<<"\n\n\tEnter age :";
	cin>>age;
	cout<<"\n\n\tEnter your Salary : ";
	cin>>sal;
	
	s1.tdat(name,age,sal);
	
	cout<<"\n\n\tEnter Student Data :";
	cout<<"\n\n\tEnter your name : ";
	cin>>name;
	cout<<"\n\n\tEnter age :";
	cin>>age;
	cout<<"\n\n\tEnter your Percentage : ";
	cin>>per;
	
	s1.tdat(name,age,per);
}
