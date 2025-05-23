//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        // int ans=0;
        int n=arr.size();
        int l=0;
        int r=0;
        int len=0;
        int sum=0;
        int minx=INT_MAX;
        while(r<n){
            sum+=arr[r];
            while(sum>x){
                len=r-l+1;
                minx=min(minx,len);
                sum=sum-arr[l];
                l++;
            }
            r++;
        }
        // if(minx!=INT_MIN)return minx;
        return (minx == INT_MAX) ? 0 : minx;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        vector<int> arr;
        int x;

        cin >> x;
        cin.ignore(); // Ignore the newline character after x

        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.smallestSubWithSum(x, arr) << "\n~\n";
    }

    return 0;
}
// } Driver Code Ends