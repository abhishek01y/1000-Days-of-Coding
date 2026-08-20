class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr1 = {nums[0]};
        vector<int>arr2 = {nums[1]};
        for(int i = 2;i<n;i++){
            if(arr1.back()<arr2.back()){
                arr2.push_back(nums[i]);
            }
            else{
                arr1.push_back(nums[i]);
            }
        }
        for(int a = 0;a<arr2.size();a++){
            arr1.push_back(arr2[a]);
        }
        return arr1;
    }
};