#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int isPalindrome(string S){
        int left = 0;
	    int right = S.length() - 1;
	    
	    while(left < right){
	        if(S[left] == S[right]){
	            left++;
	            right--;
	        }
	        if(S[left] != S[right]){
	            return false;
	        }
	    }
	    return true;
    }

};
