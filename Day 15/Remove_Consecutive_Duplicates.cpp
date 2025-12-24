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

    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]==v[i+1])
        {
            v.erase(v.begin()+i);
            i--;
        }
    }

    for(int val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;

}