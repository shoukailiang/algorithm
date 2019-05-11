import java.util.TreeSet;
public class Solution1 {
    public int uniqueMorseRepresentations(String[] words) {
        String[] codes = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        TreeSet<String> set = new TreeSet<>();
        for (String word:words) {
            StringBuilder res = new StringBuilder();
            for (int i=0;i<word.length();i++){
                res.append(codes[word.charAt(i)-'a']);  // -‘a’是由偏移量
            }
            set.add(res.toString());
        }
        return set.size();
    }
}