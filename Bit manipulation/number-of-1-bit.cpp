#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Flip the least significant 1 bit
    int hammingWeight(uint32_t n) {
        int count = 0;

        while(n > 0){
            n = n & (n - 1);
            // n & (n - 1) drops the lowest set bit.

            count++;
        }
        return count;
    }
};