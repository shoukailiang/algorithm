class Solution {
  public int[] getLeastNumbers(int[] arr, int k) {
      int len = arr.length;
          int[] res = new int[k];
          if(k==0||len==0){
              return res;
          }
          Queue<Integer> pq = new PriorityQueue<>(k,(a,b)->b-a);
          for (int i = 0; i < len; i++) {
              if(pq.size()<k){
                  pq.add(arr[i]);
              }else if(pq.peek()>arr[i])  {
                  pq.poll();
                  pq.add(arr[i]);
              }
          }

          int i = 0;
          for (int num:pq){
              res[i++] = num;
          }
          return res;
         
  }
}