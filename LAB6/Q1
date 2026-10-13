#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
public:
    float marks;
};

class Graduate : public Student {
public:
    void showHonors() {
        displayPerson();
        cout << "Marks: " << marks << endl;

        if (marks >= 90)
            cout << "Honors: Distinction" << endl;
        else
            cout << "Honors: Regular" << endl;
    }
};

int main() {
    Graduate g;
    g.name = "Rahul";
    g.marks = 92;

    g.showHonors();
    return 0;
}
