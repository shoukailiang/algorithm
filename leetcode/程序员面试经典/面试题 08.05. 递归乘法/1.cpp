class Solution {
public:
    int multiply(int A, int B) {
        int Min = min(A,B);
        int Max = max(A,B);
        if(Min==0) return 0;
        // MIN*MAX = (MIN-1+1)*MAX = (MIN-1)*MAX+MAX
        return multiply(Min-1,Max)+Max;
    }
};