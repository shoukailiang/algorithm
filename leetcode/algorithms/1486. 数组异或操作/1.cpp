class Solution {
public:
    int xorOperation(int n, int start) {
        int res = start;
        n = n-1;
        while(n--){
            start+=2;
            res = res^start;
        }
        return res;
    }
};