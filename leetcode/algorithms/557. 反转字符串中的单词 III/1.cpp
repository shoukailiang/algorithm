#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "unordered_set"
#include "unordered_map"
#include "map"
#include "stack"
#include "queue"
#include "cmath"
#include "cstdio"
using namespace std;
class Solution {
private:
    void swapString(string &s){
        int l = 0;
        int r = s.size()-1;
        while(l<=r){
            char temp = s[l];
            s[l] = s[r];
            s[r] =  temp;
            l++;
            r--;
        }
    }
public:
    string reverseWords(string s) {
        string result ;
        string tempstring;
        int i = 0;
        for (int j= 0; j < s.size(); ++j) {
            if(s[j]!=' '){
               tempstring.push_back(s[j]);
            }
            if(s[j]==' '||j==s.size()-1){
                swapString(tempstring);
                if(j!=s.size()-1){
                    result+= tempstring+" ";
                }else{
                    result+= tempstring;
                }
                tempstring.clear();
            }
        }
        return result;
    }
};
int main() {
    string s = "hello world";
    cout<<Solution().reverseWords(s);
    return 0;
}
