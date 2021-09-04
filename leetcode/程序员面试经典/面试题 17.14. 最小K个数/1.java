class Solution {
  public int[] smallestK(int[] arr, int k) {
      int[] res = new int[k];
      int len = arr.length;
      if(len==0||k==0){
          return res;
      }
      PriorityQueue<Integer> pq =  new PriorityQueue<>(k,(a,b)->{
          return b-a;
      });
      for(int i=0;i<len;i++){
          if(pq.size()<k){
              pq.add(arr[i]);
          }else{
              if(arr[i]<pq.peek()){
                  pq.poll();
                  pq.add(arr[i]);
              }
          }
      }
      for(int i=0;i<k;i++){
          res[i] = pq.poll();
      }
      return res;

  }
}