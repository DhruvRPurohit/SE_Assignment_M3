/*8. Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation */

#include <iostream>
#include <string>

using namespace std;

class Address {
    string street, city, state;

public:
    // Constructor to initialize address fields
    Address(string street, string city, string state) {
        this->street = street;
        this->city = city;
        this->state = state;
    }

    // Function to display the address
    void display() const {
        cout << "Address: " << street << ", " << city << ", " << state << endl;
    }
};

class Student {
private:
    string name, classname;
    int rno, mark;
    Address a;  // Aggregation: Address is a part of Student

public:
    // Constructor to initialize student fields and the address using reference
    Student(string name, string classname, int rno, int mark, const Address &a)
        : a(a)  // Initialize the Address object via constructor initialization list
    {
        this->name = name;
        this->classname = classname;
        this->rno = rno;
        this->mark = mark;
    }


    void display() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << classname << endl;
        cout << "Roll Number: " << rno << endl;
        cout << "Marks: " << mark << endl;
        cout << "Grade: " << calculateGrade() << endl;
        a.display();  // Display the student's address
    }

 
    char calculateGrade() const {
        if (mark >= 90) {
            return 'A';
        } else if (mark >= 75) {
            return 'B';
        } else if (mark >= 60) {
            return 'C';
        } else if (mark >= 40) {
            return 'D';
        } else {
            return 'F';
        }
    }
};

int main() {
    Address a1("Baker Street", "New York", "U.S.A");


    Student s1("Dhruv", "10 (B)", 101, 92, a1);

    
    s1.display();

    return 0;
}

