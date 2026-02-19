#include <iostream>
#include <vector>

using namespace std;

class CustomStack {
    vector<int> stack;
    vector<int> inc;
    int maxSize;
public:
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if (stack.size() < maxSize) {
            stack.push_back(x);
            inc.push_back(0);
        }
    }
    
    int pop() {
        if (stack.empty()) return -1;
        int idx = stack.size() - 1;
        if (idx > 0) inc[idx - 1] += inc[idx];
        int val = stack.back() + inc[idx];
        stack.pop_back();
        inc.pop_back();
        return val;
    }
    
    void increment(int k, int val) {
        if (stack.empty()) return;
        int idx = min(k, (int)stack.size()) - 1;
        inc[idx] += val;
    }
};
