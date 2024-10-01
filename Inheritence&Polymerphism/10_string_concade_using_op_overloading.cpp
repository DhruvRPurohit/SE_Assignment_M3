/*10.Write a programto concatenate the two strings using Operator Overloading*/

#include<iostream>
#include<string>

using namespace std;

class Concatenate{
	
	string str;
	public:
		Concatenate(string s)
		{
			str=s;
		}
		Concatenate()
		{
			
		}
	
		void display()
		{
			cout<<"\n\t"<<str;
		}
		
		Concatenate operator + (Concatenate &c)
		{
			Concatenate c3;
			c3.str = str + c.str;
			return c3;
		}
};

main()
{
	string s1,s2;
	cout<<"\n\n\tEnter String 1 :";
	cin>>s1;
	Concatenate c1(s1);
	cout<<"\n\n\tEnter String 2 :";
	cin>>s2;
	Concatenate c2(s2);
	
	cout<<"\n\n\tstring 1: ";
	c1.display();
	cout<<"\n\n\tstring 2: ";
	c2.display();
	
	Concatenate c3 = c1 + c2;
	cout<<"\n\n\tConcatenation of 2 string : ";
	c3.display();
}
