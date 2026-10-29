#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int roll, marks[5], total = 0;
    string subjects[5] = {
        "Maths", "Physics", "Chemistry",
        "Programming", "English"
    };

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> roll;

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks in " << subjects[i] << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    double percentage = total / 5.0;
    char grade;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n========== MARKSHEET ==========\n";
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << roll << endl;

    for (int i = 0; i < 5; i++)
        cout << subjects[i] << ": " << marks[i] << endl;

    cout << "Total: " << total << "/500" << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage: " << percentage << "%" << endl;

    if (grade == 'F')
        cout << "Result: FAILED" << endl;
    else
        cout << "Grade: " << grade << endl;

    return 0;
}
