#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << " Enter value of n: ";
    cin >> n;
    cout << endl;

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
    cout << endl;

    for (int i = 0; i < v.size(); i++)
    {
        for (int k = i + 1; k < v.size(); k++)
        {
            if (v[i] == v[k])
            {
                v.erase(v.begin() + k);
                k--;
            }
        }
    }
    cout << "After removing duplicacy: ";
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}