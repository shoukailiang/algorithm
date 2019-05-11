#include <iostream>
#include <vector>
#include <algorithm>
#define L -1;
#define R 1;
#define U 1;
#define D -1;
using namespace std;
class Solution1
{
public:
  bool judgeCircle(string moves)
  {
    int vertical = 0;
    int horizontal = 0;
    for (int i = 0; i < moves.size(); ++i)
    {
      switch (moves[i])
      {
      case 'L':
        horizontal += L;
        break;
      case 'R':
        horizontal += R;
        break;
      case 'U':
        vertical += U;
        break;
      case 'D':
        vertical += D;
        break;
      }
    }
    return (vertical == 0 && horizontal == 0);
  }
};
int main()
{
  bool flag = Solution1().judgeCircle("LL");
  cout << flag << endl;
  return 0;
}