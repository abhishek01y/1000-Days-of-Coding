#include <iostream>
using namespace std;

int main()
{
    int a; // a = any value(year)
    cout << "Enter value of a: ";
    cin >> a;
    if (a % 400 == 0)
    {
        cout << "Leap Year: " << a;
    }
    if (a % 4 == 0)
    {
        cout << "Leap Year: " << a;
    }

    if (a % 100 == 0)
        cout
            << "Non leap year: " << a;

    else
        cout << "Non leap year: " << a;

    return 0;
}