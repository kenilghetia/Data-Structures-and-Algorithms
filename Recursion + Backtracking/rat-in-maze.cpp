#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
    bool isSafe(vector<vector<int>>& m, int n, int x, int y, vector<vector<int>> &visited){
        if(x >= 0 && x < n && y >= 0 && y < n && visited[x][y] == 0 && m[x][y] == 1){
            return true;
        }
        return false;
    }
    
    void solve(vector<vector<int>>& m, int n, vector<string>& ans, int x, int y, vector<vector<int>> &visited, string path){
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;
        
        // case 1
        int currx = x+1;
        int curry = y;
        
        if(isSafe(m, n, currx, curry, visited)){
            path.push_back('D');
            solve(m, n, ans, currx, curry, visited, path);
            path.pop_back();
        }
        
        // case 2
        currx = x-1;
        curry = y;
        
        if(isSafe(m, n, currx, curry, visited)){
            path.push_back('U');
            solve(m, n, ans, currx, curry, visited, path);
            path.pop_back();
        }
        
        // case 3
        currx = x;
        curry = y+1;
        
        if(isSafe(m, n, currx, curry, visited)){
            path.push_back('R');
            solve(m, n, ans, currx, curry, visited, path);
            path.pop_back();
        }
        
        // case 4
        currx = x;
        curry = y-1;
        
        if(isSafe(m, n, currx, curry, visited)){
            path.push_back('L');
            solve(m, n, ans, currx, curry, visited, path);
            path.pop_back();
        }
        
        visited[x][y] = 0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        
        if(m[0][0] == 0){
            return ans;
        }
        
        int startx = 0;
        int starty = 0;
        vector<vector<int>> visited = m;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                visited[i][j] = 0;
            }
        }
        
        string path = "";
        solve(m, n, ans, startx, starty, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};