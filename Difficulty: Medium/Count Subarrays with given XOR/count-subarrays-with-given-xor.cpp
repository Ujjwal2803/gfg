//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here      Time complexity O(N^3)
        // long count=0;
        // for(int i=0;i<k;i++){
        //     for(int j=i;j<k;j++){
        //         int xorn=0;
        //         for(int l=i;l<j;l++){
        //             xorn=xorn^arr[l];
        //         }
        //         if(xorn==k)count++;
        //     }
        // }
        // return count;
        // long count = 0;  Time complexity O(N^2)
        // int n = arr.size();
        // for (int i = 0; i < n; i++) {
        //     int xorn = 0;
        //     for (int j = i; j < n; j++) {
        //         xorn ^= arr[j];
        //         if (xorn == k) count++;
        //     }
        // }
        // return count;
        int xr=0;
        map<int,int>p;
        p[xr]++;
        int count=0;
        for(int i=0;i<arr.size();i++){
            xr=xr^arr[i];
            int x=xr^k;
            count += p[x];
            p[xr]++;
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // Ignore the newline after the number of test cases

    while (tc-- > 0) {
        string input;
        getline(cin, input); // Read the whole line for the array

        stringstream ss(input);
        vector<int> arr;
        int num;

        while (ss >> num) {
            arr.push_back(num); // Push numbers into the vector
        }

        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline after k

        Solution obj;
        cout << obj.subarrayXor(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends