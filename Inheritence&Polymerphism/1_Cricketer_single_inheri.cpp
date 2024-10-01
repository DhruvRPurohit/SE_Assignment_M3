/*1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) */


#include<iostream>

using namespace std;

class Cricketer{
	protected:
		string name;
		double in;
};

class Batsman : public Cricketer {
	double total_runs;
	float aevrage;
	int best_perfo;
	
	public:
		void inputdata();
		inline void cal_avg(){
			aevrage = total_runs / in;
		}
		void display();
};

void Batsman::inputdata()
{
	cout<<"\n\n\tEnter cricketer Name :";
	cin>>name;
	cout<<"\n\n\tEnter cricketer Innings :";
	cin>>in;
	cout<<"\n\n\tEnter cricketer Total runs : ";
	cin>>total_runs;
	cout<<"\n\n\tEnter cricketer Best Perfomance :";
	cin>>best_perfo;
}

void Batsman :: display()
{
	cout<<"\n\n\n\t----------------- Cricketer Details -----------------";
	cout<<"\n\n\tcricketer Name :"<<name;
	cout<<"\n\n\tcricketer Innings : "<<in;
	cout<<"\n\n\tcricketer Total runs : "<<total_runs;
	cout<<"\n\n\tAevrage : "<<aevrage;
	cout<<"\n\n\tEnter cricketer Best Perfomance :"<<best_perfo;
}

main()
{
	Batsman B1;
	B1.inputdata();
	B1.cal_avg();
	B1.display();
}


