#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int n=5;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        cout<<" ";



        for(char name ='A'; name<='A'+i-1;name++)
        {
            cout<<name;

        }
        cout<<endl;
    }
    return 0;

}