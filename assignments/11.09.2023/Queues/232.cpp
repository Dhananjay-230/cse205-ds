class MyQueue {
public:
    stack<int>s;
    stack<int>t;
    MyQueue() {
        
    }
    void push(int x) {
        s.push(x);
    }
    int pop() {
     
     while(s.size()!=1){
         t.push(s.top());
         s.pop();
     }   
     
     int temp=s.top();
     s.pop();
     
     while(t.size()!=0){
         s.push(t.top());
         t.pop();
     }
     return temp;
    }
    int peek() {
        
     while(s.size()!=1){
         t.push(s.top());
         s.pop();
     }   
    
     int temp=s.top();
     
     while(t.size()!=0){
         s.push(t.top());
         t.pop();
     }
     return temp;
    }
    bool empty() {
        if(s.size()==0){
            return true;
        }else{
            return false;
        }
    }
};
