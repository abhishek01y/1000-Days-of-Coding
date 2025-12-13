#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a+b;
    return c;
}

int main()
{
    int c,d;
    cin>>c>>d;

    cout<<sum(c,d);

    return 0;
}

