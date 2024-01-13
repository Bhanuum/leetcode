class MyStack {
public:
    queue<int>q;
    
    void push(int x) {
        queue<int>q2;
        while(!q.empty())
        {
            q2.push(q.front());
            q.pop();
        }
        q.push(x);
        while(!q2.empty())
        {
            q.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        
        int p=q.front();
        q.pop();
        return p;
        
    }
    
    int top() {
    
        return q.front();
        
    }
    
    bool empty() {
        if(!q.empty())return false;
        else return true;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */