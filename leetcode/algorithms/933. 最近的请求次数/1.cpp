class RecentCounter {
private:
    queue<int> q;
public:
    RecentCounter() {

    }
    
    int ping(int t) {
        while(!q.empty()){
            int time = q.front();
            if(t-q.front()>3000){
                q.pop();
            }else{
                break;
            }
        }
        q.push(t);
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */