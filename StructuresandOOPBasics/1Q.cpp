// Define a structure Student with name, roll number, and marks, and print the details.

#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int rollNo;
    int marks;
};

void addStudent(Student &s)
{
    cout<<"Enter Student name: ";
    cin>>s.name;
    cout<<"Enter Student roll number: ";
    cin>>s.rollNo;
    cout<<"Enter Student marks: ";
    cin>>s.marks;
}

void printStudent(Student &s)
{
    cout<<"\nStudent name: "<<s.name<<endl;
    cout<<"Student roll number: "<<s.rollNo<<endl;
    cout<<"Student marks: "<<s.marks<<endl;
}

int main()
{
    Student s;
    addStudent(s);
    printStudent(s);
    
    return 0;
}