#include<iostream>
using namespace std;

int main()
{
    int n,pow;
    cout<<"Enter number: ";
    cin>>n;
     int num=n;

    cout<<"Enter power: ";
    cin>>pow;

    for(int i=1;i<=pow;i++)
    {
        cout<<num*n;
    }
    return 0;
}