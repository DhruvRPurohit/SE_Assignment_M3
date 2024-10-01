/* 4. Write a C++ Program display Student Mark sheet using Multiple inheritance */

#include<iostream>

using namespace std;

class student{
	protected:
			int rno;
			string name;
	public:
			student()
			{
				cout<<"\n\n\tEnter the Roll number : ";
				cin>>rno;
				cout<<"\n\n\tEnter the name : ";
				cin>>name;
			}
};

class mark{
	protected:
		double m[4];
		
	public:
		mark()
		{
			for(int i=0; i<4; i++)
			{
				cout<<"\n\n\tEnter the mark for Subject "<<i+1<<": ";
				cin>>m[i];	
			}
		}
}; 

class Result : public student , public mark {
		double per, tot;
	public:
		Result()
		{
			for(int i=0; i<4; i++)
			{
				tot += m[i];
			}
			per = tot/4;
		
		}
		
		void display()
		{
			cout<<"\n\n\t----------------Result----------------";
			cout<<"\n\n\tROll no. : "<<rno;
			cout<<"\n\tName  	: "<<name;
			cout<<"\n\tTotal Mark : "<<tot;
			cout<<"\n\tPercentage : "<<per;
		}
};

main()
{
	class Result r1;
	r1.display();
}


