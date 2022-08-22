class KthLargest {
private:
    priority_queue<int,vector<int>,greater<int>> q;
    int K;
public:
    KthLargest(int k, vector<int>& nums) {
        K = k;
        for (const auto &item: nums){
            add(item);
        }
    }

    int add(int val) {
        q.push(val);
        while(q.size()>K){
            q.pop();
        }
        return q.top();
    }
};