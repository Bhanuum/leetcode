class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>s1;
    
    void push(int x) {
        stack<int>s2;
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        
        
    }
    
    int pop() {
        int p=s1.top();
        s1.pop();
        return p;
        
        
        
    }
    
    int peek() {
        return s1.top();
        
        
        
    }
    
    bool empty() {
        if(!s1.empty())return false;
        else return true;
        
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