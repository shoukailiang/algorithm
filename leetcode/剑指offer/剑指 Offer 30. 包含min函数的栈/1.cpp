class MinStack {
private:
    stack<int> st;
    int Min = INT_MAX;
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        //
        st.push(Min);
        Min = ::min(Min,x);
        st.push(x);
        
    }
    
    void pop() {
        st.pop();
        Min = st.top();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int min() {
        return Min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */