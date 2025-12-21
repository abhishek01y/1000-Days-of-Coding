#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int val : v)
    {
        cout << val << " ";
    }

    bool aesc = true;
    bool desc = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] < v[i + 1])
            desc = false;
        if (v[i] > v[i + 1])
            aesc = false;
    }

    if (aesc)
        cout << "Array is Sorted in Ascending Order";
    else if (desc)
        cout << "Array is Sorted in Descending Order";
    else
        cout << "Array is Not Sorted";

    return 0;
}