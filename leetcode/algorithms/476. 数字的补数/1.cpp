class Solution {
public:
    int findComplement(int n) {
        int k = 1;
        while(1){
            if(((long long)1<<k)>n){
                break;
            }
            k++;
        }
        // 101  => 010 相加为111 = 2^3 -1
        return ((long long)1<<k)-1-n;
    }
};