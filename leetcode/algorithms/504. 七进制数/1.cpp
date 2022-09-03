class Solution {
public:
    string convertToBase7(int num) {
        string flag ="";
        string res ="";
        if(num==0) return "0";
        if(num<0){
            flag = "-";
            num = -num;
        }
        while(num){
            res+=(num%7+'0');
            num/=7;
        }
        reverse(res.begin(),res.end());
        return flag+res;
    }
};