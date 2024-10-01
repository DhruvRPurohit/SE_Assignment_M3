/* 2. Write a program of Addition, Subtraction, Division, Multiplication using
constructor.  */

#include<iostream>
using namespace std;

class arithmetic
{
	float a,b;
	
	public:
		arithmetic(float n,float n2)
		{
			a=n;
			b=n2;	
		}	
		
		void add()
		{
			cout<<"\n\n\t"<<a<<" + "<<b<<" = "<<a+b;
		}
		void sub()
		{
			cout<<"\n\n\t"<<a<<" - "<<b<<" = "<<a-b;
		}
		void mul()
		{
			cout<<"\n\n\t"<<a<<" * "<<b<<" = "<<a*b;
		}
		void div()
		{
			cout<<"\n\n\t"<<a<<" / "<<b<<" = "<<a/b;
		}
};

main()
{
	int choice,a,b;
	
	while(1)
	{
		cout<<"\n\n\tEnter 1 for + \n\tEnter 2 for - \n\tEnter 3 for * \n\tEnter 4 for / \n\tEnter your choice : ";
		cin>>choice;
		
		if(choice==0)
		{
			exit(0);
		}
		
		cout<<"\n\n\tEnter value 1 : ";
		cin>>a;
		cout<<"\n\n\tEnter value 2 : ";
		cin>>b;
		arithmetic a1(a,b);
		
		switch(choice)
		{
			case 0:
				exit(0);
				
			case 1:
				a1.	add();
				break;
				
			case 2:
				a1.sub();
				break;
				
			case 3:
				a1.mul();
				break;
			
			case 4:
				a1.div();
				break;
			
			default:
				cout<<"\n\tEnter valid input.";
					
		}
	}
}

