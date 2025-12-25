#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int count = 0;
    int maxCount = 0;

    for(int i = 0; i < n; i++)
    {
        if(v[i] == 1)
        {
            count++;
            maxCount = max(maxCount, count);
        }
        else
        {
            count = 0;
        }
    }

    cout << "Longest consecutive 1s = " << maxCount;
    return 0;
}
