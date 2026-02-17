#include <vector>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<int, int> m;
        int n = intervals.size();
        
        for(int i = 0; i < n; i++) {
            m[intervals[i][0]] = i;
        }
        
        vector<int> result(n);
        for(int i = 0; i < n; i++) {
            auto it = m.lower_bound(intervals[i][1]);
            if(it != m.end()) {
                result[i] = it->second;
            } else {
                result[i] = -1;
            }
        }
        return result;
    }
};
