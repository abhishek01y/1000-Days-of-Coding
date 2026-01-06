#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int n;
    cin>>n;

    priority_queue<int>pq;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    cout<<pq.top();
    return 0;
}