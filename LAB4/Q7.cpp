#include <iostream>
using namespace std;

class Array
{
    int a[5];

public:
    Array()
    {
        cout << "Enter 5 elements: ";

        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
    }

    friend int sum(Array *);

    void display()
    {
        cout << "Array elements: ";

        for (int i = 0; i < 5; i++)
        {
            cout << a[i] << " ";
        }
    }
};

int sum(Array *p)
{
    int s = 0;

    for (int i = 0; i < 5; i++)
    {
        s = s + p->a[i];
    }

    return s;
}

int main()
{
    Array obj;

    Array *ptr;

    ptr = &obj;

    ptr->display();

    cout << "\nSum = " << sum(ptr);

    return 0;
}
