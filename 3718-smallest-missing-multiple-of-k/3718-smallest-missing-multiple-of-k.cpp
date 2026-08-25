class Solution {
public:
    int missingMultiple(vector<int>& nums, int k){
        int n = nums.size();
        for(int counter = 1;counter<=n+1;counter++){
            int count = 0;
            for(int i=0;i<n;i++){
                if(k*counter==nums[i]){
                    count++;
                    break;
                }
            }
            if(count==0){
                return k*counter;
            }
        }
        return 0;
    }
};