class Solution {
  public int[] advantageCount(int[] nums1, int[] nums2) {
      int n = nums1.length;
      // 将nums2降序排序
      PriorityQueue<int[]> maxpq = new PriorityQueue<>(
          (int[] pair1,int[] pair2)->{
              return pair2[1] - pair1[1];
          }
      );
      for(int i=0;i<n;i++){
          maxpq.offer(new int[]{i,nums2[i]});
      }
      // nums1升序
      Arrays.sort(nums1);

      // nums1[left] 是最小值,nums[right]是最大值
      int left = 0,right = n-1;
      int[] res = new int[n];

      while(!maxpq.isEmpty()){
          int[] pair = maxpq.poll();
          // maxval 是nums2中的最大值,i是对应索引
          int i = pair[0],maxval = pair[1];
          if(maxval<nums1[right]){
              // 如果nums1[right] 能跳过maxval,那就打
              res[i] = nums1[right];
              right--;
          }else{
              // 打不动,找个菜一点的
              res[i] = nums1[left];
              left++;
          }
      }
      return res;
  }
}