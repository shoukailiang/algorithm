class MedianFinder {
private:
    int count;
    priority_queue<int> small;// 大顶,存储小的元素
    priority_queue<int,vector<int>,greater<int>> big;// 小顶，存储大的元素

public:
    /** initialize your data structure here. */
    MedianFinder() {
        count = 0;
    }
    
    void addNum(int num) {
        if(small.size()==0){
            small.push(num);
            count++;
            return ;
        }
        if(num<=small.top()){
            small.push(num);
            count++;
        }else{
            big.push(num);
            count++;
        }
        if(big.size()-small.size()==2){
            small.push(big.top());
            big.pop();
        }
        if(small.size()-big.size()==2){
            big.push(small.top());
            small.pop();
        }
    }
    
    double findMedian() {
        // 偶数
        if(small.size()==big.size()){
            return (small.top()+big.top())/2.0;
        }else{
            return small.size()>big.size()?small.top():big.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */