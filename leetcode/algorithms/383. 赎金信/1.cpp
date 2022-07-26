#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "unordered_map"
#include "map"
#include "stack"
#include "queue"
#include "cmath"
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        for(int i =0;i<magazine.size();i++){
            m[magazine[i]]++;
        }
        for(int i =0;i<ransomNote.size();i++){
            if(m[ransomNote[i]]!=0){
                m[ransomNote[i]]--;
            }else{
                return false;
            }
        }
        return true;
    }
};

int main() {
    string a= "aa";
    string b ="ab";
    bool res = Solution().canConstruct(a,b);
    cout<<res<<endl;
    return 0;
}
