#include<iostream>
#include<string>
using namespace std;

class Student
{
    int roll;
    string name;
    float marks;

public:
    void getdata();
    void display();
    void compare(Student s);
};

void Student::getdata()
{
    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter marks: ";
    cin >> marks;
}

void Student::display()
{
    cout << "\nRoll Number: " << roll;
    cout << "\nName: " << name;
    cout << "\nMarks: " << marks << endl;
}

void Student::compare(Student s)
{
    if(marks > s.marks)
        cout << name << " has higher marks";
    else if(marks < s.marks)
        cout << s.name << " has higher marks";
    else
        cout << "Both students have equal marks";
}

int main()
{
    Student s1, s2;

    cout << "\nEnter first student details:\n";
    s1.getdata();

    cout << "\nEnter second student details:\n";
    s2.getdata();

    cout << "\nFirst Student:";
    s1.display();

    cout << "\nSecond Student:";
    s2.display();

    cout << "\nComparison:\n";
    s1.compare(s2);

    return 0;
}
