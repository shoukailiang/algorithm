class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> temp;

        for(int i=1;i<pow(10,n);i++){
            temp.push_back(i);
        }
        return temp;
    }
};