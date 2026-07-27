class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i= nums.size()-1;i>=0;i--){
            int result = (nums[i]-1)*(nums[i-1]-1);
            return result;
            break;
        }
        return 0;
    }
};