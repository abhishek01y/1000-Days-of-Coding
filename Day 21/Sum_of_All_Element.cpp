#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int>&v)
{
    int sum= 0;
    for(int val:v)
    {
        sum+=val;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<sum(v);
    return 0;
}