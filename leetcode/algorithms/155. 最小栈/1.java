class MinStack {

  Stack<Integer> xStack;
  Stack<Integer> minStack;

  /** initialize your data structure here. */
  public MinStack() {
      xStack = new Stack<>();
      minStack = new Stack<>();
      minStack.push(Integer.MAX_VALUE);
  }
  
  public void push(int val) {
      xStack.push(val);
      minStack.push(Math.min(minStack.peek(),val));
  }
  
  public void pop() {
      xStack.pop();
      minStack.pop();
  }
  
  public int top() {
      return xStack.peek();
  }
  
  public int getMin() {
      return minStack.peek();
  }
}

/**
* Your MinStack object will be instantiated and called as such:
* MinStack obj = new MinStack();
* obj.push(val);
* obj.pop();
* int param_3 = obj.top();
* int param_4 = obj.getMin();
*/