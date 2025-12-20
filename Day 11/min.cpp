#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int val : v)
        cout << val << " ";
    cout << endl;

    int minVal = v[0];
    int index = 0;

    for(int k = 1; k < n; k++)
    {
        if(v[k] < minVal)
        {
            minVal = v[k];
            index = k;
        }
    }

    cout << "Smallest = " << minVal << endl;
    cout << "Index = " << index << endl;

    return 0;
}
