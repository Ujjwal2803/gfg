//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int dfs(int u,int c,vector<vector<int>>& adj,vector<int>&vis){
        vis[u]=c;
        for(auto x:adj[u]){
            if(vis[x]==-1){
                if(dfs(x,1-c,adj,vis))return 1;
            }
            else if(vis[x]==c) return 1;
        }
        return 0;
    }
    bool isBipartite(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        vector<int>vis(n,-1);
        for(int i=0;i<adj.size();i++){
            if(vis[i]==-1){
                if(dfs(i,0,adj,vis))return 0;
            }
        }
        return 1;
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
        bool ans = obj.isBipartite(adj);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends