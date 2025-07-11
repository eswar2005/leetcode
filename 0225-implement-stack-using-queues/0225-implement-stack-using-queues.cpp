class MyStack {
    private:
    queue<int>  st;
    void pushh(int x){
        st.push(x);
        for(int i=1;i<st.size();i++){
            st.push(st.front());
            st.pop();
        }
    }

public:
    MyStack() {
        
    }
    
    void push(int x) {
        pushh(x);
    }
    
    int pop() {
        int x=st.front();
        st.pop();
        return x;
    }
    
    int top() {
        return st.front();
    }
    
    bool empty() {
        return st.empty();
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