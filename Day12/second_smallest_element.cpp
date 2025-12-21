#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n < 2){
        cout << "Second Smallest does not exist";
        return 0;
    }

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int min1, min2;

    // First 2 elements se decide karo
    if(v[0] < v[1]){
        min1 = v[0];
        min2 = v[1];
    }
    else{
        min1 = v[1];
        min2 = v[0];
    }

    for(int i = 2; i < n; i++)
    {
        if(v[i] < min1)
        {
            min2 = min1;
            min1 = v[i];
        }
        else if(v[i] > min1 && v[i] < min2)
        {
            min2 = v[i];
        }
    }

    if(min1 == min2)
        cout << "Second Smallest does not exist";
    else
        cout << "Second Smallest = " << min2;

    return 0;
}
