/* 9. Write a Program of Two 1D Matrix Addition using Operator Overloading */

#include<iostream>

using namespace std;


class Matrix{
	
	private:
			int size;
			int *arr;
			
	public:
			Matrix(int s)
			{
				size = s;
				arr = new int[size];
			}
			
			void input()
			{
				for(int i=0; i<size; i++)
				{
					cout<<"\tEnter the element "<<i+1<<" : ";
					cin>>arr[i];
				}
			}
			
			void display()
			{
				for(int i=0; i<size; i++)
				{
					cout<<"\t"<<arr[i];
				}cout<<endl;
			}
			
			Matrix operator + ( Matrix &m)
			{
				Matrix m3(5);
				
				for(int i=0; i<size; i++)
				{ 
					m3.arr[i] = arr[i] + m.arr[i];
				}
				return m3;
			}
};

main()
{
	Matrix m1(5);
	
	cout<<"\n\n\tEnter the Matrix 1 values :"<<endl;
	m1.input();
	cout<<"\n\n\tMatrix 1 values :"<<endl;
	m1.display();
	
	cout<<"\n\n\tEnter the Matrix 2 values :"<<endl;
	Matrix m2(5);
	m2.input();
	cout<<"\n\n\tMatrix 2 values :"<<endl;
	m2.display();
	
	Matrix m3(5);
	m3 = m1 + m2; //   + operator overloading
	
	cout<<"\n\n\tTwo matrix Addition : "<<endl;
	m3.display();
		
}

