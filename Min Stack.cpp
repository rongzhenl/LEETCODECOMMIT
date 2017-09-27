class MinStack {
private:   
    stack<int> content;  
    stack<int> mins;  
public:  
    void push(int x) {  
        content.push(x);  
        //must add =, duplicate elements.  
        if(mins.empty() || x <= mins.top())  
            mins.push(x);  
    }  
  
    void pop() {  
        int top = content.top();  
        content.pop();  
        if(top == mins.top())  
        {  
            mins.pop();  
        }  
    }  
  
    int top() {  
        return content.top();  
    }  
  
    int getMin() {  
        return mins.top();  
    }  
}; 