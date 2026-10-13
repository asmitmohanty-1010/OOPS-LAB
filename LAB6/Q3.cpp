#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void showName() {
        cout << "Name: " << name << endl;
    }
};

class Teacher : virtual public Person {
public:
    string subject;
};

class Student : virtual public Person {
public:
    int rollNo;
};

class TeachingAssistant : public Teacher, public Student {
public:
    void display() {
        showName();
        cout << "Subject: " << subject << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.name = "Amit";
    ta.subject = "OOPS";
    ta.rollNo = 25;

    ta.display();
    return 0;
}
