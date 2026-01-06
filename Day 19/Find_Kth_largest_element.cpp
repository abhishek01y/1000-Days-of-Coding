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

    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        pq.pop();
    }
    cout<<pq.top();
    return 0;
}