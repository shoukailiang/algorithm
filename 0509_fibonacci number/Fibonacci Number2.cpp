#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution
{
public:
  int fib(int N)
  {
    if (N <= 1)
    {
      return N;
    }
    vector<int> fibArray(N + 1);
    fibArray[0] = 0;
    fibArray[1] = 1;
    for (int i = 2; i <= N; ++i)
    {
      fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }
    return fibArray[N];
  }
};
int main()
{

  cout << Solution().fib(10) << endl;
  return 0;
}