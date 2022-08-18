class Solution {
private:
    int gcd(int a,int b){
        return b>0 ? gcd(b,a%b) : a;
    }
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return gcd(nums[0],nums[nums.size()-1]);
    }
};