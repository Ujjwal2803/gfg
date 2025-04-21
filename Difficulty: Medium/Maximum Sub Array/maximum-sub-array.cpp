//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    //vector<int> findSubarray(vector<int>& arr) {
    //     // code here
    //     // int sum=0;
    //     // int maxn=INT_MIN;
    //     vector<int>ans;
    //     // int start=0;
    //     // int ansstart=-1;
    //     // int ansend=-1;
    //     // for(int i=0;i<arr.size();i++){
             
            
    //     //     if(sum==0)start=i;
    //     //     sum+=arr[i];
    //     //     if(sum>maxn){
    //     //         maxn=sum;
    //     //         ansstart=start,ansend=i;
    //     //     }
    //     //     if(sum<0){
    //     //         sum=0;
    //     //     }
    //     // }
    //     long long maxi = LONG_MIN; // maximum sum
    //     long long sum = 0;
    
    //     int start = 0;
    //     int ansStart = -1, ansEnd = -1;
    //     for (int i = 0; i < arr.size(); i++) {
    //         if (sum == 0) start = i; // starting index
    //         sum += arr[i];
    //         if (sum > maxi) {
    //             maxi = sum;
    //             ansStart = start;
    //             ansEnd = i;
    //         }
    //         if (sum < 0) {
    //             sum = 0;
    //         }
    //     }
    //     for(int i=ansStart;i<=ansEnd;i++){
    //         ans.push_back(arr[i]);
    //     }
    //     return ans;
    //     // for(int i=ansstart;i<=ansend;i++){
    //     //     ans.push_back(arr[i]);
    //     // }
    //     // return ans;
        
    // }
    vector<int> findSubarray(vector<int>& arr) {
        long long maxSum = -1, currSum = 0;
        int start = 0, end = 0;
        int tempStart = 0;

        int maxStart = -1, maxEnd = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= 0) {
                currSum += arr[i];
                end = i;

                if (currSum > maxSum ||
                   (currSum == maxSum && (end - tempStart > maxEnd - maxStart))) {
                    maxSum = currSum;
                    maxStart = tempStart;
                    maxEnd = end;
                }
            } else {
                currSum = 0;
                tempStart = i + 1;
            }
        }

        vector<int> ans;
        if (maxStart == -1) {
            ans.push_back(-1);  // No valid subarray found
            return ans;
        }

        for (int i = maxStart; i <= maxEnd; i++) {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from the input string

        Solution obj;
        vector<int> result = obj.findSubarray(a);

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no non-negative subarray is found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << "\n~\n"; // Ensure a new line after each test case output
    }

    return 0;
}

// } Driver Code Ends