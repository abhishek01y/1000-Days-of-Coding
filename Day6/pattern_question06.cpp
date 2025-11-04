#include <iostream>
using namespace std;

int main()
{
    int n;
    int i,j;
    /*cout << "Enter size: ";
    cin >> n;*/
    n=4;

    // upper half
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
            cout << " ";   

        for (int j = 1; j <= i; j++)
            cout << "* ";  

        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = n - i; j >= 1; j--)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    cout<<endl;
    return 0;

}
