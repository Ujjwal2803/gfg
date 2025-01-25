//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> leftSmaller(int n, int arr[]){
        // code here
        vector<int>p;
        stack<int>q;
        for(int i=0;i<=n-1;i++){
            while(q.size() && q.top()>=arr[i]){// monotonicity
                q.pop();
            }
            if(q.size()==0){
                p.push_back(-1);
            }else{
                p.push_back(q.top());
            }
            q.push(arr[i]);
        }
        
         return p;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends