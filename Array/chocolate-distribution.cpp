#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());

        int ans = INT_MAX;
        int i = 0;
        int j = m - 1;
        while(j < a.size()){
            int diff = a[j] - a[i];

            ans = min(ans, diff);

            i++;
            j++;
        }
        return ans;
    }   
};