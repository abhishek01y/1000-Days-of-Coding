#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
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

    int max1, max2;
    if (v[1] > v[0])
    {
        max1 = v[1];
        max2 = v[0];
    }
    else
    {
        max1 = v[0];
        max2 = v[1];
    }

    for (int i = 2; i < n; i++)
    {
        if (v[i] > max1)
        {
            max2 = max1;
            max1 = v[i];
        }

        else if (v[i] < max1 && v[i] > max2)
        {
            max2 = v[i];
        }
    }

    cout << "Second largest number is: " << max2;
    return 0;
}