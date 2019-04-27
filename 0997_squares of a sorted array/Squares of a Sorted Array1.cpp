#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
  vector<int> sortedSquares(vector<int>& A) {
    for (int i = 0; i < A.size(); ++i) {
      A[i]=A[i]*A[i];
    }
    sort(A.begin(),A.end());
    return A;
  }
};
int main()
{
  vector <int> a ={-4,-1,0,3,10};
  Solution().sortedSquares(a);
  for (int i = 0; i < a.size(); ++i) {
    cout<<a[i]<<endl;
  }
  return 0;
}