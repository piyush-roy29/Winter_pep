#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

class MinStack {
    stack<long long> s;
    long long minVal;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if (s.empty()) {
            s.push(0);
            minVal = val;
        } else {
            long long diff = (long long)val - minVal;
            s.push(diff);
            if (diff < 0) {
                minVal = val;
            }
        }
    }
    
    void pop() {
        if (s.empty()) return;
        long long diff = s.top();
        s.pop();
        if (diff < 0) {
            minVal = minVal - diff;
        }
    }
    
    int top() {
        long long diff = s.top();
        if (diff < 0) {
            return minVal;
        } else {
            return minVal + diff;
        }
    }
    
    int getMin() {
        return minVal;
    }
};
