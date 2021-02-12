// 排序解法
class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> temp(k,0);
        sort(arr.begin(),arr.end());
        for(int i=0;i<k;i++){
            temp[i] = arr[i];
        }
        return temp;
    }
};