class Solution {
  public boolean hasGroupsSizeX(int[] deck) {
    int[] n = new int[10000];
    for (int num: deck) {
      n[num]++;
    }
    int x = 0;
    for(int result: n) {
      if (result > 0) {
        x = gcd(x, result);
        if (x == 1) { // 如果某步中gcd是1，直接返回false
          return false;
        }
      }
    }
    return x >= 2;
  }
  // 辗转相除法
  private int gcd(int a, int b) {
    int c = a%b;
    while (c!=0){
      a= b;
      b =c;
      c = a%b;
    }
    return b;
  }
  // test
  public static void main(String[] args) {
    
    Solution solution = new Solution();
    int[] grid={1,2,3,4,4,3,2,1};
    boolean b = solution.hasGroupsSizeX(grid);
    System.out.println(b);
  }
}