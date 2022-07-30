class MyQueue {
private:
    stack<int> a;
    stack<int> b;
public:
    MyQueue() {

    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        if(!b.empty()){
            int x = b.top();
            b.pop();
            return x;
        }else{
            while(!a.empty()){
                int res = a.top();
                b.push(res);
                a.pop();
            }
            int temp = b.top();
            b.pop();
            return temp;
        }
    }
    
    int peek() {
        if(!b.empty()){
            int x = b.top();
            return x;
        }else{
            while(!a.empty()){
                int x = a.top();
                b.push(x);
                a.pop();
            }
            int temp = b.top();
            return temp;
        }
    }
    
    bool empty() {
        return a.empty()&&b.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */