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

    for(int x:v)
    {
        m[x]++;
    }
    for(int val:v)
    {
        if(m[val]==1)
        {
        cout<<val;
        return 0;
        }
    }
    cout<<-1;

    return 0;

}