#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution1
{
public:
  int fib(int N)
  {
    if (N == 0 || N == 1)
    {
      return N;
    }
    return fib(N - 1) + fib(N - 2);
  }
};
int main()
{

  cout << Solution1().fib(2) << endl;
  return 0;
}