#include<iostream>
using namespace std;

int main ()
{
    int i, n;
    cout<<"Enter number: ";
    cin>>n;

    if (n < 2)
    {
        cout << "Not prime";
        return 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "Not prime";
                return 0;
            }
        }
        cout << "Prime number";
    }

    return 0;
}
