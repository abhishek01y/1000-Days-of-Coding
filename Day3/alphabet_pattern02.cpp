#include<iostream>
using namespace std;

int main()
{
    int i,j;  //i=row and j= column.
    int a =1;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<5;j++)
        {
            char name = 'a' +(j);
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}