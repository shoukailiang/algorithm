class Solution {
public:
    int translateNum(int num) {
        if(num<10){
            return 1;
        }
        string s = to_string(num);
        vector<int> dp (s.size(),0);
        dp[0] = 1;
        for(int i =1;i<s.size();i++){
            string temp = s.substr(i-1,2);
            if(stoi(temp)<=25&&stoi(temp)>=10){
                if(i==1) {
                    dp[i] = 2;
                    continue;
                }
                dp[i] = dp[i-1]+dp[i-2];
            }else{
               dp[i] = dp[i-1];
            }
        }
        return dp[s.size()-1];

    }
};