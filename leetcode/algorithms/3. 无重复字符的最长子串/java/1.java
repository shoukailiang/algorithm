class Solution {
    public int lengthOfLongestSubstring(String s) {
        if(s.length()==0) return 0;
        HashMap<Character, Integer> map = new HashMap<Character,Integer>();
        int max = 0;
        int left = 0;
        for(int i=0;i<s.length();i++){
            // first case
            //  abca，当我们遍历到第二个a，当前有效最长子段是 abc，我们又遍历到a，
            //  那么此时更新 left 为 map.get(a)+1=1，当前有效子段更新为 bca；
            // second case 
            // 如：abba，我们先添加a,b进map，此时left=0，我们再添加b，发现map中包含b，
            //  而且b包含在最长有效子段中，
            if(map.containsKey(s.charAt(i))){
                left = Math.max(left,map.get(s.charAt(i))+1);
            }
            // 判断当前字符是否包含在map中，如果不包含，将该字符添加到map（字符，字符在数组下标）,
            // 此时没有出现重复的字符，左指针不需要变化。此时不重复子串的长度为：i-left+1
            map.put(s.charAt(i),i);
            max = Math.max(max,i-left+1);
        }
        return max;
    }
}