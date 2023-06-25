class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        int n = a.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        int total =1;
        for(int i=0;i<n;i++){
            left[i] = total;
            total*=a[i];
        }
        total = 1;
        for(int i=n-1;i>=0;i--){
            right[i] = total*left[i];
            total*=a[i];
        }
        return right;
    }
};