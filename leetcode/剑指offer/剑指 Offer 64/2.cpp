class Solution {
public:
    int sumNums(int n) {
        int sum = 0;
        n&&(sum= n+sumNums(n-1));
        return sum;
    }
};