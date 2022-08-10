import java.util.*;

public class Solution2 {
    public List<Integer> topKFrequent(int[] nums, int k) {
        // 统计频次
        TreeMap<Integer, Integer> map = new TreeMap<>();
        for(int num: nums){
            if(map.containsKey(num))
                map.put(num, map.get(num) + 1);
            else
                map.put(num, 1);
        }
        // java的PriorityQueue 默认是最小堆
        // Comparator 比较器
        PriorityQueue<Integer> pq = new PriorityQueue<>(new Comparator<Integer>() { 
            @Override
            public int compare(Integer a, Integer b) {
                return map.get(a)-map.get(b);
            }
        });
        for(int key: map.keySet()){
            if(pq.size() < k)
                pq.add(key);
            else if(map.get(key) > map.get(pq.peek())){
                pq.remove();                       // 获取并删除队首元素
                pq.add(key);
            }
        }
        LinkedList<Integer> res = new LinkedList<>();
        while(!pq.isEmpty())
            res.add(pq.remove());
        return res;
    }
    private static void printList(List<Integer> nums){
        for(Integer num: nums)
            System.out.print(num + " ");
        System.out.println();
    }
    public static void main(String[] args) {
        int[] nums = {1, 1, 1, 2, 2, 3};
        int k = 2;
        printList((new Solution2()).topKFrequent(nums, k));
    }
}