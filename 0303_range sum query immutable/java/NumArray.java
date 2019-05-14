/**
* Your NumArray object will be instantiated and called as such:
* NumArray obj = new NumArray(nums);
* int param_1 = obj.sumRange(i,j);
*/
class NumArray {
  private int [] sum;           // sum[0] num0
                                // sum[1] num0+num1
                                // sum[2] num0+num1+num2
  public NumArray(int[] nums) {
    sum = new int[nums.length];
    sum[0] = nums[0];
    for (int i = 1; i < nums.length; i++) {
      sum[i]=sum[i-1]+nums[i];    //sum[1] =sum[0]+num1
    }
  }
  
  public int sumRange(int i, int j) {
    if(i==0){
      return sum[j];
    }
    return sum[j]-sum[i-1];
  }
}

