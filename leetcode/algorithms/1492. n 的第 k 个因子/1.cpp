class Solution {
public:
    int kthFactor(int n, int k) {
        int sn = sqrt(n);
        int a[1001];
        int i =0;
        int top = 0;
        for(i =1;i<=sn;i++){
            if(n%i==0){
                a[top++] = i;
                // 7 = > 1 7 
                if(n/i!=i){
                    a[top++] = n/i;
                }
            }
        }
        sort(a,a+top);
        if(top<k){
            return -1;
        }
        return a[k-1];
    }
};