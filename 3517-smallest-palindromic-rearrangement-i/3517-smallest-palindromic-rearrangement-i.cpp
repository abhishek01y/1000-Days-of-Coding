class Solution {
public:
    string smallestPalindrome(string s) {

        vector<int> freq(26, 0);

        // Count frequency of each character
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        string left = "";
        string middle = "";

        // Build left half and find middle character
        for (int i = 0; i < 26; i++) {

            int cnt = freq[i] / 2;

            while (cnt--) {
                left += char(i + 'a');
            }

            if (freq[i] % 2 == 1) {
                middle = char(i + 'a');
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + middle + right;
    }
};