//Reverse String - Leetcode

// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size()-1;
        char inter;

        while(left < s.size()/2){
            inter = s[left];
            s[left] = s[right];
            s[right] = inter;

            left++;
            right--;
        }
    }
};