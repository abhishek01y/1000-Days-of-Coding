#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    int e;
    cin>>e;

    if(s.find(e)!=s.end())
    {
        cout<<"Present";
    }
    else
    cout<<"Absent";
    return 0;
} 
