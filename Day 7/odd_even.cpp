#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cout<<"Entter value of n:";
    cin>>n;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << "Even number: " << i << "\n";
        }
        else
        {
            cout << "Odd number: " << i << "\n";
        }
        i++;
    }

    return 0;
}
