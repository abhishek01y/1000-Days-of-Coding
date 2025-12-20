#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    for (int val : vec)
    {
        cout << val << " ";
    }

    for (int i = 0; i < n; i++)
    {
        bool alreadyvisited = false;

        for (int k = 0; k < n; k++)
        {
            if (vec[i] == vec[k])
            {
                alreadyvisited = true;
                break;
            }
        }
        if (alreadyvisited)
            continue;
        int count = 0;
        for (int k = 0; k < n; k++)
        {
            if (vec[k] == vec[i])
                count++;
        }
        cout << vec[i] << "->" << count << endl;
    }

    return 0;
}