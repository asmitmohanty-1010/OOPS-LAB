#include <iostream>
#include <iomanip>
using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) ||
           (year % 4 == 0 && year % 100 != 0);
}

int firstDay(int year, int month) {
    int t[] = {0, 3, 2, 5, 0, 3,
               5, 1, 4, 6, 2, 4};

    if (month < 3)
        year--;

    return (year + year / 4 - year / 100
            + year / 400 + t[month - 1] + 1) % 7;
}

int main() {
    int year;

    string months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int days[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    cout << "Enter year: ";
    cin >> year;

    if (isLeapYear(year))
        days[1] = 29;

    cout << "\n        CALENDAR " << year << "\n";

    for (int m = 1; m <= 12; m++) {
        cout << "\n\n       " << months[m - 1] << "\n";
        cout << " Sun Mon Tue Wed Thu Fri Sat\n";

        int start = firstDay(year, m);

        for (int i = 0; i < start; i++)
            cout << "    ";

        for (int d = 1; d <= days[m - 1]; d++) {
            cout << setw(4) << d;

            if ((start + d) % 7 == 0)
                cout << '\n';
        }

        cout << '\n';
    }

    return 0;
}
