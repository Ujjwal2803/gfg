//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    int dfs(vector<vector<int>>& adj,vector<int>&vis,int u,int p){
        vis[u]=1;
        for(auto x:adj[u]){
            if(!vis[x]){
                if(dfs(adj,vis,x,u))return 1;
            }else if(x!=p){
                return 1;
            }
        }
        return 0;
    }
    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                if (dfs(adj, vis, i, -1)) return true;;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends