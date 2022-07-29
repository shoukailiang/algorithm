import java.util.HashMap;
// 滑动窗口
class Solution {
    public Boolean checkInclusion(String t, String s) {
        HashMap<Character, Integer> need = new HashMap<>(), window = new HashMap<>();
        char[] chars = t.toCharArray();
        for (char c : chars) {
            need.put(c,need.getOrDefault(c,0)+1);
        }

        int left = 0,right = 0;
        //满足条件的个数
        int valid =0;
        // 开始滑动
        while (right<s.length()){
            // c 是将移入窗口的字符
            char c = s.charAt(right);
            // 右移动
            right++;
            // 进行窗口内数据的一系列更新
            if(need.containsKey(c)){
                window.put(c,window.getOrDefault(c,0)+1);
                if(window.get(c).equals(need.get(c))){
                    valid++;
                }
            }
            //判断左侧窗口是否收缩
            while (right-left>=t.length()){
                // 更新最小覆盖
                if(valid==need.size()){
                    return true;
                }
                // d是将要移除的字符
                char d = s.charAt(left);
                // 左移窗口
                left++;
                // 进行窗口内数据的一系列更新
                if(need.containsKey(d)){
                    if(window.get(d).equals(need.get(d))){
                        valid--;
                    }
                    window.put(d,window.getOrDefault(d,0)-1);
                }
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Boolean aBoolean = new Solution().checkInclusion("ab", "eidbaooo");
        System.out.println(aBoolean);
    }
}