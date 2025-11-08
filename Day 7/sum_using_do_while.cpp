#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 10;
    int sum = 0;

    do
    {
        cout << i << " ";
        sum += i;
        i++;
    } while (i <= n);

    cout << "\nSum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
