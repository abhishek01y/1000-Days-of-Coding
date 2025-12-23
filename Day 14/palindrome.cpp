#include <iostream>
#include <deque>
using namespace std;

bool ispalindromedeque(string &s)
{
    deque<char> d;
    for (auto ch : s)
    {
        d.push_back(ch);
    }

    while (d.size() < 1)
    {
        if (d.begin() != d.end())
        {
            return false;

            d.pop_back();
            d.pop_front();
        }
        return true;
    }
}

int main()
{
    string s;
    cin>>S;

    cout<<(ispalindromedeque(s)? "Palindrome" : "Not Palindrome");
    return 0;
}