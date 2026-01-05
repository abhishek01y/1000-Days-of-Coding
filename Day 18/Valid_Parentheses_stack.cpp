#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string n;
    cin>>n;

    stack<char>s;
    for(auto st:n)
    {
        if(st=='{')
        {
            s.push(st);
        }

        else
        {
            if(s.empty())
            {
                cout<<"Invalid";
                return 0;
            }
            s.pop();
        }
    }

    if(s.empty())
    {
        cout<<"Valid";
    }
    else
    cout<<"Invalid";
    return 0;
}