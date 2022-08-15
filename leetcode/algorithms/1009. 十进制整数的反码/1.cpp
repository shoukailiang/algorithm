class Solution {
public:
    int bitwiseComplement(int n) {
        int k = 1;
        while(1){
            if((1<<k)>n){
                break;
            }
            k++;
        }
        // 101  => 010 相加为111 = 2^3 -1
        return (1<<k)-1-n;
    }
};