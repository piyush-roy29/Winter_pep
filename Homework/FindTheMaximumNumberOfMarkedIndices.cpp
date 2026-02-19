#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0, right = n / 2;
        int count = 0;
        
        while (left < n / 2 && right < n) {
            if (2 * nums[left] <= nums[right]) {
                count += 2;
                left++;
            }
            right++;
        }
        return count;
    }
};
