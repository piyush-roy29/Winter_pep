#include <iostream>

using namespace std;

class Solution{
public:
    long long int factorial(int N){
        long long int f = 1;
        for(int i = 1; i <= N; i++) {
            f = f * i;
        }
        return f;
    }
};
