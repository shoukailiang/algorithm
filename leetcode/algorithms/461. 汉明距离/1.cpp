class Solution {
private:
    int countOne(int n){
        int res =0;
        while(n){
            n = n&(n-1);
            res++;
        }
        return res;
    }
public:
    int hammingDistance(int x, int y) {
        return countOne(x^y);
    }
};