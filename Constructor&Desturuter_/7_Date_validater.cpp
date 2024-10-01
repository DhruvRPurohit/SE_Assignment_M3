/* 7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid */

#include<iostream>

using namespace std;

class date{
	
	int day;
	int month;
	int year;
	public:
		
		date(int d,int m,int y)
		{
			day=d;
			month=m;
			year=y;
		}
	
		void validate();
		void getdate();
};

void date :: validate()
{
	if(year % 4 == 0 && year != 0)
	{
		if(month == 2)
		{
			if(day >= 1 && day <= 29)
			{
				cout<<"\n\n\tDate is valid.";
			}
			else
			{
				cout<<"\n\n\tDate is Invalid !";
			}
		}
		else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month ==12)
		{
			if( day >= 1 && day <= 31)
			{
				cout<<"\n\n\tDate is valid";
			}
			else
			{
				cout<<"\n\n\tDate is Invalid !";
			}	
		}
		else if(month == 4 || month == 6 || month == 9 || month == 11)
		{
			if( day >= 1 && day <= 30)
			{
				cout<<"\n\n\tDate is valid";
			}
			else
			{
				cout<<"\n\n\tDate is Invalid !";
			}
		}
	}

	else if(year >= 1 &&  year%4 != 4)
	{
		if( month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month ==12)
		{
			if( day >= 1 && day <= 31)
			{
				cout<<"\n\n\tDate is valid";
			}
			else
			{
				cout<<"\n\n\tDate is Invalid !";
			}
		}
		else if( month == 4 || month == 6 || month == 9 || month == 11)
		{
			if( day >= 1 && day <= 30)
			{
				cout<<"\n\n\tDate is valid";
			}
			else
			{
				cout<<"\n\n\tDate is Invalid !";
			}
		}
		else 
		{
			cout<<"\n\n\tDate is Invalid !";
		}
		
	}
	else
	{
		cout<<"\n\n\tDate is Invalid !";
	}
	
	
}

void date :: getdate()
{
	cout<<"\n\n\tEntered Date : "<<day<<"/"<<month<<"/"<<year;
}

main()
{
	int d,m,y;
	
	cout<<"\n\n\tEnter day : ";
	cin>>d;
	cout<<"\n\n\tEnter month : ";
	cin>>m;
	cout<<"\n\n\tEnter the year :";
	cin>>y;
	class date d1(d,m,y);
	
	d1.getdate();
	d1.validate();
	
}


