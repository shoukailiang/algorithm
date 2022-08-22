class Solution {
public:
    int countOperations(int num1, int num2) {
        if(!num1||!num2){
            return 0;
        }
        int maxv = max(num1,num2);
        int minv = min(num1,num2);
        return countOperations(maxv-minv,minv)+1;
    }
};