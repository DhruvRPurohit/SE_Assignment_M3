/* 2. Write a program of to sort the array using templates */

#include<iostream>

using namespace std;
	
	template <class T>
	void getdata(T *arr,T size)
	{
		for (int i=0; i<size; i++)
		{
			cout<<"\n\n\tEnter the Element "<<i+1<<" : ";
			cin>>arr[i];
		}
	}
	
	template <class T>
	void display(T *arr,T size)
	{
		for(int i=0; i<size; i++)
		{
			cout<<"\t"<<arr[i];
		}
	}
	
	template <class T>
	void sortarray(T *arr,T size)
	{
		int t;
		for(int i=0; i<size; i++)   
		{
			for(int j=i+1; j<size; j++)
			{
				if(arr[i] > arr[j])   
				{                     
					t=arr[i];
					arr[i]=arr[j];  // sorting 
					arr[j]=t;
				}
			}
		}
	}
	
	
	
main()
{
	int size;
	cout<<"\n\n\tEnter the size : ";
	cin>>size;
	int arr[size];
	getdata(arr,size);
	cout<<"\n\n\tBefore soring ........."<<endl;
	display(arr,size);
	cout<<"\n\n\tAfter sorting ..........."<<endl;
	sortarray(arr,size);
	display(arr,size);
}
