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
        bool alreadyPrinted = false;

        for (int j = 0; j < i; j++)
        {
            if (v[i] == v[j])
            {
                alreadyPrinted = true;
                break;
            }
        }
        if (alreadyPrinted)
            continue;
        int count = 0;
        for (int k = 0; k < v.size(); k++)
        {
            if (v[i] == v[k])
                count++;
        }
        cout << v[i] << "->" << count << endl;
    }
    return 0;
}