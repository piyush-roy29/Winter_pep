#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int totalOnes = 0;
        for (int num : nums) totalOnes += num;
        
        if (totalOnes == 0) return 0;
        
        vector<int> extendedNums = nums;
        extendedNums.insert(extendedNums.end(), nums.begin(), nums.end());
        
        int currentOnes = 0;
        int maxOnes = 0;
        
        for (int i = 0; i < totalOnes; i++) {
            currentOnes += extendedNums[i];
        }
        maxOnes = currentOnes;
        
        for (int i = totalOnes; i < 2 * n; i++) {
            currentOnes += extendedNums[i] - extendedNums[i - totalOnes];
            maxOnes = max(maxOnes, currentOnes);
        }
        
        return totalOnes - maxOnes;
    }
};
