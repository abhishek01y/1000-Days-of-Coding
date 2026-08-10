#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int n = nums.size();
        int officer = 0;
        int unique = 1;
        int cm = 1;

        while (cm < n) {
            if (nums[cm] == nums[cm - 1]) {
                cm++;
                continue;
            }

            nums[officer + 1] = nums[cm];
            officer++;
            unique++;
            cm++;
        }

        return unique;
    }
};