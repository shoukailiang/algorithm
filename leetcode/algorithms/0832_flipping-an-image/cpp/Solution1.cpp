#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution1 {
public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    vector<vector<int>> result;
    for (int i = 0; i < A.size(); ++i) {
      result.push_back(vector<int>());
      for (int j =A[i].size()-1;j>=0;j--){
        if(A[i][j]==1){
          A[i][j]=0;
        } else{
          A[i][j]=1;
        }
        result[i].push_back(A[i][j]);
      }
    }
    return result;
  }
};
int main()
{
  vector<vector<int>> A;
  vector<int> B;
  B.push_back(1);
  B.push_back(1);
  B.push_back(0);
  A.push_back(B);
  B.clear();
  B.push_back(1);
  B.push_back(0);
  B.push_back(1);
  A.push_back(B);
  B.clear();
  B.push_back(0);
  B.push_back(0);
  B.push_back(0);
  A.push_back(B);

  vector<vector<int>> res = Solution1().flipAndInvertImage(A);
  cout<<"[ ";
  for (int i = 0; i < res.size(); ++i) {
    cout<<"[";
    for (int j = 0; j < res[i].size(); ++j) {
      cout<<res[i][j]<<" ";
    }
    cout<<"]";
  }
  cout<<" ]";
  return 0;
}