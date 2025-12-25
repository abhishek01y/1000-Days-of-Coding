#include <iostream>
#include <vector>
using namespace std;

int findMajority(vector<int>& v)
{
    int n = v.size();

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(v[i] == v[j])
                count++;
        }

        if(count > n / 2)
            return v[i];    
    }

    return -1;   
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int ans = findMajority(v);

    if(ans == -1)
        cout << "No Majority Element";
    else
        cout << "Majority Element = " << ans;

    return 0;
}
