#include<iostream>
using namespace std;

int main()
{
    int i,j;  //i=row and j= column.
    int a =1;
    for(i=1;i<=5;i++)
    {
        char name = 'a' +(i-1);
        for(j=0;j<5;j++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}