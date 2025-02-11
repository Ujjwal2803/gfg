//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// class Solution {
//   public:
//     void dfs(int i,int j,vector<vector<int>>& v,string & s){
//         if(i<0 or j<0, i>v.size() or j>=v[0].size() or v[i][j]!=1)return;
//         v[i][j]=0;
//         s+="u";
//         dfs(i-1,j,v,s);
//         s+="d";
//         dfs(i+1,j,v,s);
//         s+="l";
//         dfs(i,j-1,v,s);
//         s+="r";
//         dfs(i,j+1,v,s);
//         s += "b";  // Backtrack marker (fixes incorrect shape counting)
//     }
//     int countDistinctIslands(vector<vector<int>>& v) {
//         // code here
//         int n=v.size();
//         int m=v[0].size();
//         // if(n==0 or m==0){
//         //     return 0;
//         // }
//         if (n == 0) return 0;

//         set<string>s;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(v[i][j]==1){
//                     string k="";
//                     dfs(i,j,v,k);
//                     s.insert(k);
//                 }
//             }
//         }
//         return s.size();
//     }
// };
class Solution {
  public:
    void dfs(int i, int j, vector<vector<int>>& v, string &s) {
        if (i < 0 || j < 0 || i >= v.size() || j >= v[0].size() || v[i][j] != 1) return;
        
        v[i][j] = 0; // Mark as visited
        
        // Append movement direction
        s += "u";  // Up
        dfs(i - 1, j, v, s);
        
        s += "d";  // Down
        dfs(i + 1, j, v, s);
        
        s += "l";  // Left
        dfs(i, j - 1, v, s);
        
        s += "r";  // Right
        dfs(i, j + 1, v, s);

        s += "b";  // Backtrack marker
    }

    int countDistinctIslands(vector<vector<int>>& v) {
        int n = v.size();
        if (n == 0) return 0; // Fix segmentation fault when v is empty
        int m = v[0].size();
        
        set<string> s; // Stores unique island structures
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] == 1) {
                    string k = "";
                    dfs(i, j, v, k);
                    s.insert(k);
                }
            }
        }
        return s.size(); // Number of distinct islands
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends