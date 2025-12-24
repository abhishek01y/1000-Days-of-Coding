#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    bool increasing = true;

    for (int i = 0; i < n - 1; i++)
    {

        if (v[i] >= v[i + 1])
            increasing = false;
        break;
    }
    if (increasing)
        cout << "Is increasing" << endl;

    else
        cout << "Not increasing" << endl;

    return 0;
}