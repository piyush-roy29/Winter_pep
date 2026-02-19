#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
    int ans = INT_MAX;
public:
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> children(k, 0);
        backtrack(cookies, children, 0);
        return ans;
    }
    
    void backtrack(vector<int>& cookies, vector<int>& children, int idx) {
        if (idx == cookies.size()) {
            int maxCookies = 0;
            for (int c : children) maxCookies = max(maxCookies, c);
            ans = min(ans, maxCookies);
            return;
        }
        
        for (int i = 0; i < children.size(); i++) {
            if (children[i] + cookies[idx] >= ans && ans != INT_MAX) continue;
            children[i] += cookies[idx];
            backtrack(cookies, children, idx + 1);
            children[i] -= cookies[idx];
            
            if (children[i] == 0) break;
        }
    }
};
