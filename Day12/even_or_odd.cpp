#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << "Even Numbers: ";
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
            cout << v[i] << " ";
    }

    cout << endl;

    cout << "Odd Numbers: ";
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 != 0)
            cout << v[i] << " ";
    }

    return 0;
}
