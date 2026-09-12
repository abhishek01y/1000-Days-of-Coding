class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>> pq; //maxheap
        // priority_queue<int,vector<int>,greater<int>> minheap; 
        for(int i:nums){
            pq.push(i);
        }
        k-=1;
        while(k--){
            pq.pop();
        }
        return pq.top();
    }
};