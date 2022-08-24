class CQueue {
private:
    stack<int> in;
    stack<int> out;
public:
    CQueue() {

    }

    void appendTail(int value) {
        in.push(value);
    }

    int deleteHead() {
        if(out.empty()&&in.empty()){
            return -1;
        }
        if(out.empty()){
            while(!in.empty()){
                int x = in.top();
                in.pop();
                out.push(x);
            }
            int x = out.top();
            out.pop();
            return x;
        }
        // out 不为空
        int x = out.top();
        out.pop();
        return x;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */