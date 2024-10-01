/* 1. WAP to create simple calculator using class */

#include<iostream>

using namespace std;

class calc
{
	double v1,v2;
		public:
			void getdata();
			void add();
			void sub();
			void mul();
			double div();
};

void calc :: getdata()
{
	cout<<"\n\n\tEnter Value 1 :";
	cin>>v1;
	cout<<"\n\n\tENter value 2 :";
	cin>>v2;
}

void calc :: add()
{
	cout<<"\n\n\t"<<v1<<" + "<<v2<<" = "<<v1+v2;
}

void calc :: sub()
{
	cout<<"\n\n\t"<<v1<<" - "<<v2<<" = "<<v1-v2;
}

void calc :: mul()
{
	cout<<"\n\n\t"<<v1<<" X "<<v2<<" = "<<v1*v2;
}

double calc :: div()
{
	cout<<"\n\n\t"<<v1<<" / "<<v2<<" = ";
	float i;
	i = v1 / v2;
	return i;
}

main()
{
	class calc c;

	while(1)
	{
		int n;
		cout<<"\n\n\t 0 for Exit \n\t 1 for + \n\t 2 for - \n\t 3 for X \n\t 4 for /  \n\tEnter your choice : ";
		cin>>n;	
		switch(n)
		{
			case 0:
				exit(0);
				
			case 1:
				c.getdata();
				c.add();
				break;
				
			case 2:
				c.getdata();
				c.sub();
				break;
			
			case 3:
				c.getdata();
				c.mul();
				break;
				
			case 4:
				c.getdata();
				cout<<c.div();
				break;
				
			default:
				cout<<"\n\n\tEnter valid chiice .";
			
		}
	}
}
