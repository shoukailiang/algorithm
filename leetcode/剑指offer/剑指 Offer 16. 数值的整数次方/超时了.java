class Solution {
  public double myPow(double x, int n) {
      double result = 1.0;
      for(int i=0;i<Math.abs(n);i++){
          result*=x;
      } 
      return n>0?result:1/result;
  }
}