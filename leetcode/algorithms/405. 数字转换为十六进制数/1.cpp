class Solution {
private:
    char code(int n){
        if(n>=10){
            return n-10+'a';
        }else{
            return n+'0';
        }
    }
public:
    string toHex(int num) {
        // 将负数转换成正数
        unsigned int n = num;
        if(n==0) return "0";
        string ret;
        while(n){
            // 取出末尾的四位
            ret+=code(n&0xf);
            n>>=4;
        }
        reverse(ret.begin(),ret.end());
        return ret;
    }
};