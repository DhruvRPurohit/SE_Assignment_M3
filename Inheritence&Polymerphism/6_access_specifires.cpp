/* 6. Write a C++ Program to show access to Private Public and Protected using
Inheritance
*/

#include <iostream>
using namespace std;

class Base{
	private:
			int privatevar;
			
	protected:
			int protectvar;
			
	public:
			int publicvar;
			
		Base()  // Constructer
		{
			privatevar = 10;
			protectvar = 20;
			publicvar = 30;
		}
		
		int getprivatevar()
		{
			return privatevar;
		}
		
		void displaybase()
		{
			cout<<"\n\n\tPrivate variable (access only in class) : "<<privatevar<<endl;
			cout<<"\tProtected variable: " << protectvar << endl;
        	cout<<"\tPublic variable: " << publicvar << endl;	
		}
};


class Derived : public Base{
	
	public :
		 void displayDerived()
		 {
		 	 cout<<"\n\tProtected variable (inherited): " <<protectvar << endl;
		 	 cout<<"\tPublic variable (inherited): " <<publicvar << endl;
		 }
};


main()
{
	Base bobj;
	Derived dobj;
	
	cout<<"\n\n\tAccessing Base class object :";
	bobj.displaybase();
	
	cout<<"\n\n\tAccessing Derived class object :";
	dobj.displayDerived();
	
	cout<<"\n\tAccesing Public variable in main : "<<bobj.publicvar;
}


