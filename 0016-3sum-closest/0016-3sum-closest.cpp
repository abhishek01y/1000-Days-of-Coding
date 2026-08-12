class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int answer = nums[0] + nums[1] + nums[2];
        int mindiff = abs(answer - target);
        for (int i = 0; i < n ; i++) {
            int l = i + 1;
            int r = n - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                int diff = abs(sum - target);
                if (diff < mindiff) {
                    mindiff = diff;
                    answer = sum;
                }
                if (sum == target) {
                    return sum;
                }
                else if (sum < target) {
                    l++;
                }
                else {
                    r--;
                }
            }
        }
        return answer;
    }
};