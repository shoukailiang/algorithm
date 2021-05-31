class Solution {
public:
    int sumNums(int n) {
        if(n==1){
            return n;
        }
        return sumNums(n-1)+n;
    }
};