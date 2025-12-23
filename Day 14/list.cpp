#include <iostream>
#include <list>
using namespace std;

int main()
{
    int n;
    cin >> n;

    list<int> l;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }

    cout << "Before any operation: ";
    for (auto p : l)
    {
        cout << p << " ";
    }
    cout << endl;
    cout << "Enter the value you want to delete: ";
    int s;
    cin >> s;

    l.remove(s);

    cout << "After operation: ";
    for (auto p : l)
    {
        cout << p << " ";
    }
    cout << endl;
}