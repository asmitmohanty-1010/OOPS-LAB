#include <iostream>
using namespace std;

class Book {
public:
    string title;
    void displayBook() {
        cout << "Book Title: " << title << endl;
    }
};

class EBook : public Book {
public:
    string format;

    void displayEBook() {
        displayBook();
        cout << "Format: " << format << endl;
    }
};

int main() {
    EBook e;
    e.title = "C++ Programming";
    e.format = "PDF";

    e.displayEBook();
    return 0;
}
