package com.company;

import java.util.Stack;

class MyQueue {
    private Stack<Integer> stackPush;
    private Stack<Integer> stackPop;


    /** Initialize your data structure here. */
    public MyQueue() {
        stackPush = new Stack<>();
        stackPop = new Stack<>();
    }

    // push to pop
    private void pushToPop(){
        if(stackPop.empty()){
            while(!stackPush.empty()){
                stackPop.push(stackPush.pop());
            }
        }
    }
    
    /** Push element x to the back of queue. */
    public void push(int x) {
        stackPush.push(x);
        pushToPop();
    }
    
    /** Removes the element from in front of queue and returns that element. */
    public int pop() {
        pushToPop();
        return stackPop.pop();

    }
    
    /** Get the front element. */
    public int peek() {
        pushToPop();
        return stackPop.peek();
    }
    
    /** Returns whether the queue is empty. */
    public boolean empty() {
        pushToPop();
        return stackPop.empty();
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */