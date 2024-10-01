/* 5. Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance) */

#include<iostream>

using namespace std;

class Student{
	
	protected:
			int rno;
		
};

class Test : public Student{
	
	protected:
			int sub1,sub2;
					
};

class result : public Test{
	
	int tot;
	
	public :
			void getdata()
			{
				cout<<"\n\n\tEnter the Roll number : ";
				cin>>rno;
				cout<<"\n\n\tEnter the Subject 1 mark : ";
				cin>>sub1;
				cout<<"\n\n\tEnter the Subject 2 mark : ";
				cin>>sub2;
				tot = sub1+sub2;
			}
			
			void display()
			{
				cout<<"\n\n\t Student Test  Data := ";
				cout<<"\n\n\t Roll number : "<<rno;
				cout<<"\n\t Subject 1 mark :"<<sub1;
				cout<<"\n\t Subject 2 mark :"<<sub2;
				cout<<"\n\t Total marks :"<<tot;	
			}
}; 

main()
{
	class result r1;
	
	r1.getdata();
	r1.display();
	
}
