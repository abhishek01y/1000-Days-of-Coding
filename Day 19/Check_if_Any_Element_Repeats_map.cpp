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
    int found=0;
    for(auto x:m)
    {
        if(x.second>1)
        {
            cout<<"Yes";
            found=1;
            break;
        }
    }
    if(found==0)
    {
        cout<<"No";
    }

    return 0;
}