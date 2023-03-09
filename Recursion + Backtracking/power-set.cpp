#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	    void solve(int index, string out, string in, vector<string>& ans){
	        if(index == in.length()){
	            ans.push_back(out);
	            return;
	        }
	        out += in[index];
	        solve(index+1, out, in, ans);
	        
	        out.pop_back();
	        solve(index+1, out, in, ans);
	        
	    }
		vector<string> AllPossibleStrings(string s){
		    int index = 0;
		    string in = s;
		    string out = "";
		    vector<string> ans;

		    solve(index, out, in, ans);
		    
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};