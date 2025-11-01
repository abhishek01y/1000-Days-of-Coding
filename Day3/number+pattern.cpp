#include<iostream>
using namespace std;

int main()
{
    int i,j;  //i=row and j= column.
    int a =1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<a<<" ";
            a=a+1;
        }
        cout<<endl;
    }
    return 0;
}