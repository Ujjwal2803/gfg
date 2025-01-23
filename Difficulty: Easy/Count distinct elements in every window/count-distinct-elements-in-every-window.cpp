//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        // unordered_set<int>p;
        // int i=0,j=k-1;
        // vector<int>q;
        // for(int k=0;k<=j;k++){
        //     p.insert(arr[k]);
        // }
        // q.push_back(p.size());
        
        // for(int i=k;i<arr.size();i++){
        //     p.insert(arr[i]);
        //     if (p.find(arr[i-k]) != p.end()) { 
        //         p.erase(p.find(arr[i-k]));
                
        //     }
        //     // p.erase(p.find(arr[i-k]));
        //     q.push_back(p.size());
        // }
        // return q;
        unordered_map<int, int> p;
        vector<int> q;
        int distinct_count = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            if (p[arr[i]] == 0) {
                distinct_count++;
            }
            p[arr[i]]++;
            
            if (i >= k) {
                if (p[arr[i - k]] == 1) {
                    distinct_count--;
                }
                p[arr[i - k]]--;
            }
            
            if (i >= k - 1) {
                q.push_back(distinct_count);
            }
        }
        return q;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends