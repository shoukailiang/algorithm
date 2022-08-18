class MovingAverage {
    int s;
    vector<int> arr;
    int sum =0;
    int idx =0;
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        s = size;
    }
    
    double next(int val) {
        arr.push_back(val);
        sum+=val;
        if(arr.size()>s){
            sum-=arr[idx++];
        }
        return sum*1.0/(arr.size()-idx);
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */