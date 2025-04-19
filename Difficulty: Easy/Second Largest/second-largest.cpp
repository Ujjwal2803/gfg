//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(ans<arr[i]){
                ans=arr[i];
            }
        }
        int p=-1;
        for(int i=0;i<arr.size();i++){
            if(p<arr[i] & arr[i]!=ans){
                p=arr[i];
            }
        }
        return p;
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
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends