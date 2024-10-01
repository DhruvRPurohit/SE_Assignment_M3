/* 2. Define a class to represent a bank account. Include the following members:

3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance */

#include<iostream>

using namespace std;

class bank{
	string depositor;
	int accno;
	string type;
	int amount;
	
	public:
			void value();
			void deposit();
			void withdraw();
			void display();
};

void bank :: value()
{
	depositor = "Dhruv";
	accno = 101;
	type = 'S';
	amount = 10000;
}
void bank :: deposit()
{
	string name;
	cout<<"\n\n\tEnter the name of Depositor :";
	cin>>name;
	int amo;
	cout<<"\n\n\tEnter the amount you want to deposit : ";
	cin>>amo;
	amount +=amo;
	cout<<"\n\n\tYour Account number "<<accno<<" is credited with "<<amo<<" By "<<name<<".\n\tYour current Balance : "<<amount;
}

void bank :: withdraw()
{
	int amo;
	cout<<"\n\n\tEnter the amount you want to Withdraw : ";
	cin>>amo;
	
	if (amount < amo )
	{
		cout<<"\n\n\tYour balance is not Enough to make this transaction .";
	}
	else
	{
		amount-=amo;
		cout<<"\n\n\tYour Account number "<<accno<<" is Debited with "<<amo<<".\n\tYour current Balance : "<<amount;
	}
	
}

void bank :: display()
{
	cout<<"\n\n\tName :"<<depositor;
	cout<<"\n\tBalance :"<<amount;	
}

main()
{
	class bank b;
	
	b.value();
	while(1)
	{
		int ch;
		cout<<"\n\n\tEnter O for Exit from Banking System\n\tEnter 1 for Deposits\n\tEnter 2 for the Withdrawls \n\tEnter 3 for the Dispaly the Account Details \n\tENter your Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 0:
				exit(0);
			case 1:
					b.deposit();
					break;
			
			case 2:
					b.withdraw();
					break;
					
			case 3:
				b.display();
				break;
				
			default:
				cout<<"\n\tEntered inavalid Input.";		
		}
	}		
	
}


