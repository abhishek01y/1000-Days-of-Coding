#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int last = 0, prev = 1, curr;

    if (n == 1) {
        cout << "Fibonacci number: " << last;
        return 0;
    } else if (n == 2) {
        cout << "Fibonacci number: " << prev;
        return 0;
    }
    
    cout<<last<<" "<<prev<<" ";
    for (int i = 3; i <= n; i++) {
        curr = last + prev;
        cout<<curr<<" ";
        last = prev;
        prev = curr;
    }

    //cout << "Fibonacci number: " << curr;
    return 0;
}
