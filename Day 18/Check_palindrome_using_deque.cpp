#include<iostream>
#include<deque>
using namespace std;

int main()
{
    int n;
    cin>>n;
    deque<int>dq;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        dq.push_back(x);
    }
    while(dq.size()>1)
    {
        if(dq.front()!=dq.back())
        {
            cout<<"Not palindrome";
            return 0;
        }
        else
        {
            dq.pop_back();
            dq.pop_front();
        }
    }
    cout<<"Palindrome";
    return 0;
}