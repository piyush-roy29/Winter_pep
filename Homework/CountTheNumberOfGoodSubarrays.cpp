#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long res = 0;
        unordered_map<int, int> count;
        long long pairs = 0;
        int left = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            pairs += count[nums[right]];
            count[nums[right]]++;
            
            while (pairs >= k) {
                count[nums[left]]--;
                pairs -= count[nums[left]];
                left++;
            }
            res += left; 
        }
        return res;
    }
};
