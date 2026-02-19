#include <iostream>
#include <vector>

using namespace std;

class Solution {
    int count = 0;
public:
    int countArrangement(int n) {
        vector<bool> visited(n + 1, false);
        backtrack(n, 1, visited);
        return count;
    }
    
    void backtrack(int n, int pos, vector<bool>& visited) {
        if (pos > n) {
            count++;
            return;
        }
        
        for (int i = 1; i <= n; i++) {
            if (!visited[i] && (i % pos == 0 || pos % i == 0)) {
                visited[i] = true;
                backtrack(n, pos + 1, visited);
                visited[i] = false;
            }
        }
    }
};
