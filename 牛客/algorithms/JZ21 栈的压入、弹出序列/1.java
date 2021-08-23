import java.util.ArrayList;
import java.util.Stack;
public class Solution {
    public boolean IsPopOrder(int [] pushed,int [] popped) {
       if(pushed.length==0&&popped.length==0){
            return true;
        }
         if(pushed.length==0||popped.length==0){
            return false;
        }
        int popindex =0;
        Stack<Integer> stack = new Stack<Integer>();
        for(int i=0;i<pushed.length;i++){
            stack.push(pushed[i]);
            while(!stack.isEmpty()&&stack.peek()==popped[popindex]){
                stack.pop();
                popindex++;
            }
        }
        return stack.isEmpty();
    }
}

