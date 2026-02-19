#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        return countLess(nums, upper) - countLess(nums, lower - 1);
    }
    
    long long countLess(vector<int>& nums, int val) {
        long long res = 0;
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            if (nums[left] + nums[right] <= val) {
                res += (right - left);
                left++;
            } else {
                right--;
            }
        }
        return res;
    }
};
