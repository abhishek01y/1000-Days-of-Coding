#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    int d;
    cin >> d;

    if (s.find(d) != s.end())
        cout << "Exist";
    else
        cout << "Not Exist";

    return 0;
}
