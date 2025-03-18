//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        // int i=0,j=k-1;
        // int maxn=INT_MIN;
        // while(j<arr.size()-1){
        //     int sum=0;
        //     for(int k=i;k<j;k++){
        //         sum+=arr[k];
        //     }
        //     maxn=max(sum,maxn);
        //     i++;j++;
        // }
        // return maxn;
        int sum=0;
        int maxn=INT_MIN;
        int i=0,j=k-1;
        `for(int k=i;k<=j;k++){
            sum+=arr[k];
        }
        maxn=max(maxn,sum);
        j++;
        while(j<=arr.size()-1){
            sum+=arr[j++]-arr[i++];
            maxn=max(maxn,sum);
        }
        return maxn;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
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
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends