class Solution {
  public boolean validateStackSequences(int[] pushed, int[] popped) {
      if(pushed.length==0&&popped.length==0){
          return true;
      }
      if(pushed.length==0||popped.length==0){
          return false;
      }
      Stack<Integer> stack = new Stack<Integer>();
      int popIndex = 0;
      for(int i=0;i<pushed.length;i++){
          stack.push(pushed[i]);
          while(!stack.isEmpty()&&stack.peek()==popped[popIndex]){
              stack.pop();
              popIndex++;
          }
      }
      return stack.isEmpty();
  }
}