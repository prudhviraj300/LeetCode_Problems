class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st2.empty()){
            transfer();
        }
        int ele = st2.top();
        st2.pop();
        return ele;
    }
    
    int peek() {
        if(st2.empty()){
            transfer();
        }
        return st2.top();
    }
    
    bool empty() {
        if(st1.empty() && st2.empty()){
            return true;
        }
        return false;
    }

private:
    stack<int> st1, st2;

    void transfer(){
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
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