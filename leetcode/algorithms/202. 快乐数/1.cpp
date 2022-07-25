class Solution {
private:
    int getNum(int n){
        int sum =0;
        while(n){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        while(true){
            int sum = getNum(n);
            if(sum==1){
                return true;
            }
            if(set.find(sum)!=set.end()){
                return false;
            }else{
                set.insert(sum);
            }
            n = sum;
        }
    }
};