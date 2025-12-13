#include<iostream>
using namespace std;

bool prime(int n)
{
    if(n<2)
    return 0;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }

    return 1;
}

int factorial(int j)
{
    int ans = 1;
    for(int i=1;i<=j;i++)
    {
        ans = ans*i;
    }
    return ans;
}

int main()
{
    int n,j;
    cin>>n>>j;

    cout<<bool(n);
    cout<<factorial(j);
}