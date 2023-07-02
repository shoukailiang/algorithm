class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        while(n){
            // 相当于把最后一位的1消掉了
            n = n&(n-1);
            res++;
        }
        return res;
    }
};