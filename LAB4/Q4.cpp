#include <iostream>
using namespace std;

class Fibonacci
{
    int n;

public:
    // Default constructor
    Fibonacci()
    {
        n = 5;
    }

    // Parameterized constructor
    Fibonacci(int x)
    {
        n = x;
    }

    void generate()
    {
        int a = 0, b = 1, c;

        cout << "Fibonacci Series: ";

        for (int i = 0; i < n; i++)
        {
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
    }
};

int main()
{
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    Fibonacci f1;       // Default constructor
    Fibonacci f2(n);    // Parameterized constructor

    cout << "\nUsing parameterized constructor:\n";
    f2.generate();

    return 0;
}
