#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
int main()
{
    vector<pair<int, int>> students;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int roll_no, marks;
        cin >> roll_no >> marks;
        students.emplace_back(roll_no, marks);
    }

    sort(students.begin(), students.end(), cmp);

        for (auto p : students)
    {
        cout << p.first << "->" << p.second << endl;
    }

    return 0;
}