//[1 0 3 0 5] → [1 3 5 0 0]

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> v = {1, 0, 3, 0, 5};
    deque<int> b;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            b.push_back(v[i]);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            b.push_back(v[i]);
        }
    }

    for (int val : b)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}