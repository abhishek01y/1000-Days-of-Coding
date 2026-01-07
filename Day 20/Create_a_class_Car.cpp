#include<iostream>
using namespace std;

class car
{
    public:
    string brand;
    int speed;
    
    void showdetails()
    {
        cout<<brand<<"->"<<speed<<"km/hr";
    }
};

int main()
{
    car c1;
    c1.brand = "Audi";
    c1.speed = 150;
    c1.showdetails();
    return 0;
}