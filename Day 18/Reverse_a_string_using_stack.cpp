#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<char> st;

    for(char p : s)
    {
        st.push(p);
    }

    while(!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}
