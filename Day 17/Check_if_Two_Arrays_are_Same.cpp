#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<int, int> m1;
    for (int val : v)
        m1[val]++;

    unordered_map<int, int> m2;
    for (int val : a)
        m2[val]++;

    if (m1 == m2)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
