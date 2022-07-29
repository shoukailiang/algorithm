class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> temp (2001,0);
        for(int i =0;i<arr.size();i++){
            temp[arr[i]] =1;
        }
        int kk = k;
        for(int i =1;i<temp.size();i++){
            if(temp[i]==0){
                kk--;
            }
            if(kk==0){
                return i;
            }
        }
        return 0;
    }
};