#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;

    if(n < 2)
    {
        cout << "Second smallest does not exist";
        return 0;
    }

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for(int x : v)
    {
        if(x < min1)
        {
            min2 = min1;
            min1 = x;
        }
        else if(x > min1 && x < min2)
        {
            min2 = x;
        }
    }

    if(min2 == INT_MAX)
        cout << "Second smallest does not exist";
    else
        cout << "Second smallest = " << min2;

    return 0;
}
