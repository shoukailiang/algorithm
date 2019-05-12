// TreeSet
import java.util.ArrayList;
import java.util.TreeSet;
class Solution1 {
    public int[] intersection(int[] nums1, int[] nums2) {
        TreeSet<Integer> set = new TreeSet<>();
        for (int num:nums1){
            set.add(num);       // 此时set里面已经存放了num1数组去重后的元素了
        }
        ArrayList<Integer> list = new ArrayList<>();
        for (int num:nums2){
            if(set.contains(num)){
                list.add(num);
                set.remove(num); // 此时有空可能有重复的 ,将num从set中移除，下次相同的就不会添加进去了
            }
        }

        // 生成返回的数组
        int res [] =new int[list.size()];
        for (int i=0;i<list.size();i++){
            res[i]=list.get(i);
        }
        return res;
    }

    public static void main(String[] args) {
        int nums1[] = {4,9,5};
        int nums2[] = {9,4,9,8,4};
        int res[] = new Solution1().intersection(nums1,nums2);
        for (int i = 0; i < res.length; i++) {
            System.out.println(res[i]);
        }
    }
}