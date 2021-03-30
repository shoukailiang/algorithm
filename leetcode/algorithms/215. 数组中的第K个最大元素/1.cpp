class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // 小顶堆
        priority_queue<int,vector<int>,greater<int>> pq;
        // priority_queue<int,vector<int>,less<int>> pq2;
        for (int i = 0; i < k; ++i) {
            pq.push(nums[i]);
        }
        for (int i = k; i <nums.size() ; ++i) {
            if(nums[i]>pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};