/*
Maximum Subarray Sum : Kadane's Algorithm 

Iterate throughout the array to find all possible subarray O(n^3)

kadane's algo says that 
    we carry the subarray sum as long as it gives us the positive value. if (-ve), update it to 0.

*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxSubArray(vector<int>& nums){
        int sum = 0;
        int Max = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(sum > Max) Max = sum;
            if(sum < 0) sum = 0;
        }
        return Max;
    }

};