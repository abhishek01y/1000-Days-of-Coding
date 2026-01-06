#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }

    map<int,int>m;
    for(auto p:v)
    {
        m[p]++;
    }
    int mx=0;
    int ans;
    for(auto x:m)
    {
        if(x.second>mx)
        {
            mx= x.second;
            ans = x.first;
        }
    }
    cout<<ans;
    return 0;
}
