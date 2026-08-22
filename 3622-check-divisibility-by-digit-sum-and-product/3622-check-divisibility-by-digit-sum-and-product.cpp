class Solution {
public:
    bool checkDivisibility(int n) {
        int digit;
        int sum = 0;
        int product= 1;
        int original = n;
        while(n>0){
        digit = n%10;
        n = n/10;
        sum += digit;
        product = digit*product;
        }
        if(original%(sum+product) ==0) return true;
        else return false;
    }
};