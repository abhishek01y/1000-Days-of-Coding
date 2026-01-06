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
    for(auto a:v)
    {
        if(m[a]==1)
        {
            cout<<a;
            break;
        }
    }
    return 0;

}