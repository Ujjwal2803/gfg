//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& nums, int target) {
        // // code here
        // // map<int,int> a;
        // // for(int i=0;i<arr.size();i++){
        // //     int b=arr[i];
        // //     int n=target-b;
        // //     if(a.find(n)!=a.end()){
        // //         return true;
        // //     }
        // //     a[b]=i;
        // // }
        // // return false;
        // set<int> a;
        // for(int i=0;i<arr.size();i++){
        //     int b=arr[i];
        //     int n=target-b;
        //     if(a.find(n)!=a.end()){
        //         return true;
        //     }
        //     a.insert(b);
        // }
        // return false;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]<target){
                i++;
            }else if(nums[i]+nums[j]>target){
                --j;
            }else{
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.twoSum(arr, x);
        cout << (ans ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends