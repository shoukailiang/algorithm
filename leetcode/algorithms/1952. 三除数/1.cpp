class Solution {
public:
    bool isThree(int n) {
        int cnt = 0;
        int sn = sqrt(n+1e-7);
        for(int i =1;i<=sn;i++){
            if(n%i==0){
                cnt++;
                if(n/i!=i){
                    cnt++;
                }
                if(cnt>3){
                    return false;
                }
            }
        }
        return cnt==3;
    }
};