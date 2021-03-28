class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        long sum=0;
        bool flag = true;// 正
        while(i<s.size()&&s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            flag = false;
            i++;
        }else if(s[i]=='+'){
            i++;
        }
        if(!isdigit(s[i])){
            return 0;
        }
        while(i<s.size()&&isdigit(s[i])){
            int temp = s[i]-'0';
            sum = sum*10+temp;
            if(sum>INT_MAX||sum<INT_MIN){
                return flag?INT_MAX:INT_MIN;
            }
            i++;
        }
        return flag?sum:-1*sum;
    }
};