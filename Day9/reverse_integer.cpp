#include <iostream>
using namespace std;

int main()
{
    int i;
    int rem;
    int ans = 0;
    cout << "Enter value of i: ";
    cin >> i;
    while (i > 0)
    {
        rem = i % 10;
        i /= 10;
        ans = ans * 10 + rem;
    }
    cout << "Reverse number is: " << ans;
    return 0;
}