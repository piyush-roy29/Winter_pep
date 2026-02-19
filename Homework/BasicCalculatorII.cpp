#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    int calculate(string s) {
        if (s.empty()) return 0;
        int n = s.length();
        stack<int> st;
        int currentNumber = 0;
        char operation = '+';
        
        for (int i = 0; i < n; i++) {
            char currentChar = s[i];
            if (isdigit(currentChar)) {
                currentNumber = (currentNumber * 10) + (currentChar - '0');
            }
            if (!isdigit(currentChar) && !isspace(currentChar) || i == n - 1) {
                if (operation == '-') {
                    st.push(-currentNumber);
                } else if (operation == '+') {
                    st.push(currentNumber);
                } else if (operation == '*') {
                    int stackTop = st.top();
                    st.pop();
                    st.push(stackTop * currentNumber);
                } else if (operation == '/') {
                    int stackTop = st.top();
                    st.pop();
                    st.push(stackTop / currentNumber);
                }
                operation = currentChar;
                currentNumber = 0;
            }
        }
        int result = 0;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        return result;
    }
};
