#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    int n;
    string subject[10];
    float marks[10];
    float cgpa;
};

int main() {
    Student s;

    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter roll number: ";
    cin >> s.rollNo;

    cout << "Enter number of subjects (max 10): ";
    cin >> s.n;

    if (s.n < 1 || s.n > 10) {
        cout << "Invalid number of subjects!" << endl;
        return 0;
    }

    for (int i = 0; i < s.n; i++) {
        cout << "Enter subject " << i + 1 << " name: ";
        cin >> s.subject[i];

        cout << "Enter marks: ";
        cin >> s.marks[i];
    }

    cout << "Enter CGPA: ";
    cin >> s.cgpa;

    cout << "\n===== STUDENT DETAILS =====\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNo << endl;

    for (int i = 0; i < s.n; i++) {
        cout << s.subject[i]
             << " Marks: " << s.marks[i] << endl;
    }

    cout << "CGPA: " << s.cgpa << endl;

    return 0;
}
