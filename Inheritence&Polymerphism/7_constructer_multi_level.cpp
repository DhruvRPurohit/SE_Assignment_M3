/* 7.Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance */

#include<iostream>

using namespace std;

class Base{
	
	public:
			Base()
			{
				cout<<"\n\n\tBase class Constructer is Called.";
			}
			
			~Base()
			{
				cout<<"\n\n\tBase class destructer is Called. ";
			}
};

class Intermediate : public Base{
	
	public:
			Intermediate()
			{
				cout<<"\n\n\tIntermediate class Constructer Called.";
			}
			~Intermediate()
			{
				cout<<"\n\n\tIntermediate class Destructer is Called.";
			}
	
};

class Derived : public Intermediate{
	
		public:
			Derived()
			{
				cout<<"\n\n\tDerived class Constructer Called.";
			}
			~Derived()
			{
				cout<<"\n\n\tDerived class Destructer is Called.";
			}
};

main()
{
	Derived d1;
	cout<<"\n\n\n\t==> Destructers Are Called :";
}


