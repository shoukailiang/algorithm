class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> temp(k,0);
        if(k==0) return temp;
        // C++ 语言中的堆（即优先队列）为大根堆
        priority_queue<int> pq;
        for(int i=0;i<k;i++){
            pq.push(arr[i]);
        }
        for(int i=k;i<arr.size();i++){
            if(pq.top()>arr[i]){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        for(int i=0;i<k;i++){
            temp[i] = pq.top();
            pq.pop();
        }
        return temp;
    }
};