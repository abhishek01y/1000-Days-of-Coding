#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int n;
    cin >> n;

    deque<int> d;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d.push_back(x);
    }

    for (auto val : d)
    {
        cout << val << " ";
    }

    cout << endl;
    cout << "After operations: ";
    d.pop_back();
    d.pop_front();

    for (auto val : d)
    {
        cout << val << " ";
    }

    return 0;
}