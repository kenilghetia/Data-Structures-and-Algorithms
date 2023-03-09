#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int max_ans = 0;
	    int row_ans = -1;
	    
	    for(int i = 0; i < n; i++){
	        int curr_ans = 0;
	        for(int j = 0; j < m; j++){
	            if(arr[i][j] == 1) curr_ans++;
	        }
	        
	        if(max_ans < curr_ans){
	        max_ans = curr_ans;
	        row_ans = i;
	        }
	    }
	    return row_ans;
	}

};