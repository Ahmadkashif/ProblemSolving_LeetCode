class MyQueue {
private:
    stack <int> st1;
public:
    MyQueue() {
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st1.empty())
            return 0;
        int element = st1.pop();
        pop();
        if(st1.empty() && element > 0){
            answer = element;
            return answer;
        }
        st1.push(element);
        return answer;
    }
    
    int peek() {
        if(st1.empty())
            return 0;
        
    }
    
    bool empty() {
        return st1.empty();
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