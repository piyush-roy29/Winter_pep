#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> heights(n, 0);
        int maxArea = 0;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == '1') {
                    heights[j]++;
                } else {
                    heights[j] = 0;
                }
            }
            maxArea = max(maxArea, largestRectangleArea(heights));
        }
        return maxArea;
    }
    
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int max_area = 0;
        int i = 0;
        while (i < heights.size()) {
            if (s.empty() || heights[s.top()] <= heights[i]) {
                s.push(i++);
            } else {
                int tp = s.top();
                s.pop();
                int area_with_top = heights[tp] * (s.empty() ? i : i - s.top() - 1);
                max_area = max(max_area, area_with_top);
            }
        }
        while (!s.empty()) {
            int tp = s.top();
            s.pop();
            int area_with_top = heights[tp] * (s.empty() ? i : i - s.top() - 1);
            max_area = max(max_area, area_with_top);
        }
        return max_area;
    }
};
