//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    int dfs(vector<vector<int>>& adj,vector<int>&vis,vector<int>&path,int u){
        vis[u]=1;
        path[u]=1;
        for(auto x:adj[u]){
            if(!vis[x]){
                if(dfs(adj,vis,path,x))return 1;
            }else if(path[x]){
                return 1;
            }
        }
        path[u]=0;
        return 0;
    }
    bool isCyclic(int V, vector<vector<int>> adj) {
        // code here
        int n=adj.size();
        vector<int>vis(n,0);
        vector<int>path(n,0);//due to presence of closed loop
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                if(dfs(adj,vis,path,i))return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends