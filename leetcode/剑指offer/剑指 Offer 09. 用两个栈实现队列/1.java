class CQueue {
  Deque<Integer> stack1;
  Deque<Integer> stack2;
  public CQueue() {
      stack1 = new LinkedList<Integer>();
      stack2 = new LinkedList<Integer>();
  }
  
  public void appendTail(int value) {
      stack1.push(value);
  }
  
  public int deleteHead() {
      // 如果第二个栈为空
      if(!stack2.isEmpty()){
          return stack2.pop();
      }else{
          while(!stack1.isEmpty()){
              stack2.push(stack1.pop());
          }
          return stack2.isEmpty()?-1:stack2.pop();
      }
  }
}

/**
* Your CQueue object will be instantiated and called as such:
* CQueue obj = new CQueue();
* obj.appendTail(value);
* int param_2 = obj.deleteHead();
*/