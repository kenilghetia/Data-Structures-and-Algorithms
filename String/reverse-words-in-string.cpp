#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string str = "";
        stack<string> st;

        for(int i = 0; i < n; i++){
            if(s[i] == ' '){
                continue;
            }
            while(i < s.length() && s[i] != ' '){
                str += s[i];
                i++;
            }
            st.push(str);
            str = "";
        }

        string ans;

        while(st.size() != 1){
            ans = ans + st.top() + " ";
            st.pop();
        }

        ans += st.top();
        return ans;
    }
};