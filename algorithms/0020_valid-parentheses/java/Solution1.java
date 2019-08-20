import java.util.Stack;
class Solution1 {
    public boolean isValid(String s){
        Stack<Character> stack = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            char c= s.charAt(i);
            // 压入栈
            if(c=='('||c=='['||c=='{'){
                stack.push(c);
            }else {
                // 若输入的是"]"
                if(stack.isEmpty()){
                    return false;
                }
                char top = stack.pop();
                if(top=='('&&c!=')'){
                    return false;
                }else if(top=='{'&&c!='}'){
                    return false;
                }else if(top=='['&&c!=']'){
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }
    public static void main(String[] args) {
        System.out.println((new Solution1()).isValid(""));
        System.out.println((new Solution1()).isValid("([)]"));
    }
}
