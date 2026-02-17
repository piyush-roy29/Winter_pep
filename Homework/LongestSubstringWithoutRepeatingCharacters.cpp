#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> charIndex(256, -1);
        int longest = 0, start = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (charIndex[s[i]] != -1) {
                start = max(start, charIndex[s[i]] + 1);
            }
            charIndex[s[i]] = i;
            longest = max(longest, i - start + 1);
        }
        
        return longest;
    }
};
