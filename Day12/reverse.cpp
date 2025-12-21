#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout<<"Original vector: ";
    for(int val:  v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"Reverse number: ";
    for(auto it= v.rbegin();it!= v.rend();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}