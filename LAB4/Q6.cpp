#include <iostream>
using namespace std;

class Student
{
    int roll;
    float marks;

public:
    Student()
    {
        roll = 0;
        marks = 0;
        cout << "Default constructor called" << endl;
    }

    Student(int r, float m)
    {
        roll = r;
        marks = m;
        cout << "Parameterized constructor called" << endl;
    }

    Student(Student &s)
    {
        roll = s.roll;
        marks = s.marks;
        cout << "Copy constructor called" << endl;
    }

    void display()
    {
        cout << "Roll = " << roll << endl;
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s1;
    s1.display();

    cout << endl;

    Student s2(101, 85.5);
    s2.display();

    cout << endl;

    Student s3(s2);
    s3.display();

    return 0;
}
