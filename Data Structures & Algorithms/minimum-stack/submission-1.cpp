class MinStack {
private:
    std::stack<long> stek;
    long min;
public:
    MinStack() {}
    
    void push(int val) {
        if(stek.empty()) {
            stek.push(0);
            min=val;
        }
        else {
            stek.push(val-min);
            if(val < min) min=val;
        }
    }
    
    void pop() {

        if(stek.empty()) return;

        long tmp = stek.top();
        stek.pop();

        if(tmp<0) {
            min = min-tmp;
        }
    }
    
    int top() {
        long top = stek.top();
        return (top > 0) ? (top+min) : (int)min;
    }
    
    int getMin() {
        return (int)min;
    }
};
