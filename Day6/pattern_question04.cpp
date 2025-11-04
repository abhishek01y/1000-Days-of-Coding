#include <iostream>
using namespace std;

int main()
{
    int i, j;

   //upper half
    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j >= i; j--)
            cout << "*";

        for (j = 1; j <= 2 * i - 2; j++)
            cout << " ";

        for (j = 4; j >= i; j--)
            cout << "*";

        cout << endl;
    }

    //lowerr half
    int spaces = 6; 
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "*";

        for (j = 1; j <= spaces; j++)
            cout << " ";

        for (j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
        spaces -= 2; 
    }

    return 0;
}
