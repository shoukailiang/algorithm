// TreeMap
import java.util.ArrayList;
import java.util.TreeMap;
class Solution1 {
    public int[] intersect(int[] nums1, int[] nums2) {
        TreeMap<Integer,Integer> map = new TreeMap<>();
        for(int num:nums1){
            if(!map.containsKey(num)){
                map.put(num,1);
            }else {
                map.put(num,map.get(num)+1);
            }
        }
        ArrayList<Integer> list = new ArrayList<>();
        for(int num:nums2){
            if(map.containsKey(num)){
                list.add(num);
                map.put(num,map.get(num)-1);
                if(map.get(num)==0){
                    map.remove(num);
                }
            }
        }
        // 构造返回数组
        int ret[] = new int[list.size()];
        for (int i = 0; i < list.size(); i++) {
            ret[i]=list.get(i);
        }
        return ret;
    }
}