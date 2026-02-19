#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
    int res = 0;
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        sort(nums.begin(), nums.end());
        backtrack(nums, k, 0, count);
        return res - 1;
    }
    
    void backtrack(vector<int>& nums, int k, int idx, unordered_map<int, int>& count) {
        if (idx == nums.size()) {
            res++;
            return;
        }
        
        backtrack(nums, k, idx + 1, count);
        
        if (count[nums[idx] - k] == 0) {
            count[nums[idx]]++;
            backtrack(nums, k, idx + 1, count);
            count[nums[idx]]--;
        }
    }
};
