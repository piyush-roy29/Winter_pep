#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findCatalan(int n) {
        if (n <= 1) return 1;
        vector<long long> catalan(n + 1, 0);
        catalan[0] = catalan[1] = 1;
        
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                catalan[i] = (catalan[i] + catalan[j] * catalan[i - j - 1]) % 1000000007;
            }
        }
        return catalan[n];
    }
};
