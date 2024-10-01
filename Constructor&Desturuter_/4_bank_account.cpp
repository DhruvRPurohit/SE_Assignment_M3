/* 4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account */

#include<iostream>

using namespace std;

class BankAccount{
	
	int accno;
	double bal;
	
	public :
		BankAccount(int a, double b)
		{
			accno = a;
			bal = b;
		}
		
		void withdraw();
		void deposit();
};

void BankAccount :: withdraw()
{
	int amo;
	cout<<"\n\n\tEnter the Amount you Want to Withdraw : ";
	cin>>amo;
	
	if(bal<amo)
	{
		cout<<"\n\n\tYou have Insufficient Balance to Withdraw. ";
	}
	else
	{
		bal -= amo;
		cout<<"\n\n\t"<<amo<<" Withdrawed from your account "<<accno<<".\n\tYour current Ballance is : "<<bal;	
	}
	
}

void BankAccount :: deposit()
{
	int amo;
	cout<<"\n\n\tEnter the Amount you Want to Deposit : ";
	cin>>amo;
	
		bal += amo;
		cout<<"\n\n\t"<<amo<<"  Deposited in your account "<<accno<<".\n\tYour current Ballance is : "<<bal;	
}

main()
{
	class BankAccount b1(101,25000);	
	int c;
	while(1)
	{
		cout<<"\n\n\tEnter 0 for Exit \n\tEnter 1 for Withdraw \n\tEnter 2 for Deposit \n\n\tEnter your choice : ";
		cin>>c;
		
		switch(c)
		{
			case 0:
				exit(0);
				
			case 1: 
				b1.withdraw();
				break;
				
			case 2:
				b1.deposit();
				break;
				
			default:
				cout<<"Entered Invalid Innput. ";
				break;
		}
	}
	
}
