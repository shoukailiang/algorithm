#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
  vector<int> sortArrayByParity(vector<int>& A) {
    for (int i = 0,j=0; j <A.size() ; ++j) {
      if(A[j]%2==0){
        swap(A[i],A[j]);
        i++;
      }
    }
    return A;
  }
};
int main()
{
  vector <int> a ={3,1,2,4};
  Solution().sortArrayByParity(a);
  for (int i = 0; i < a.size(); ++i) {
    cout<<a[i]<<endl;
  }
  return 0;
}