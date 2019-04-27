#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
  vector<int> sortArrayByParity(vector<int>& A) {
    vector<int> temp;
    for (int i = 0; i < A.size(); ++i) {
      if (A[i] % 2 == 0) {
        temp.push_back(A[i]);
      }
    }
    for (int i = 0; i < A.size(); ++i) {
      if (A[i] % 2 == 1) {
        temp.push_back(A[i]);
      }
    }
    A = temp;
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