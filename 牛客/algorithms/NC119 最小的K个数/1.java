import java.util.*;
public class Solution {
    public ArrayList<Integer> GetLeastNumbers_Solution(int [] input, int k) {
        ArrayList<Integer> res = new ArrayList<>();
        int len = input.length;
        if(len<k||k==0){
            return res;
        }
        PriorityQueue<Integer> pq = new PriorityQueue<>(k,(a,b)->(b-a));
        for (int i = 0; i < len; i++) {
            if(pq.size()<k){
                pq.add(input[i]);
            }else {
               if(input[i]<pq.peek()){
                  pq.poll();
                  pq.add(input[i]);
               }
            }
        }
        res.addAll(pq);
        return res;
    }
}