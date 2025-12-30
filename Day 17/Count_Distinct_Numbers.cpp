#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    unordered_map<int,int>m;

    for(int x: v)
    {
        m[x]=1;
    }

    cout<<m.size();

    return 0;

}