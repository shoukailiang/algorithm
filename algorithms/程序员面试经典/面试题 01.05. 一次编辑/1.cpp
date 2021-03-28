#include <iostream>
#include <cstdio>
#include <queue>
#include <cstring>
#include "unordered_set"
#include "unordered_map"
#include "string"
#include "stack"
#include "cmath"
#include "algorithm"
using namespace std;

bool oneEditAway(string first, string second) {
    //判断长度差别是否满足一位以内
    int a=first.size()-second.size();
    if (abs(a)>1){
        return false;
    }
    //只能跳过一次
    bool hasContinue=false;
    for (int i = 0,j=0; i < first.size()&&j<second.size(); i++,j++) {
        if (first[i]==second[j]){
            continue;
        }else if(hasContinue){
            return false;
        }
        //"islander"
        //"slander"
        if (a==1){
            j--;
        }else if(a==-1){
            i--;
        }
        hasContinue=true;
    }
    return true;
}
int main()
{
    bool b = oneEditAway("islander", "slander");
    cout<<b<<endl;
}