//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int start=-1,end=-1;
        int l=0,h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]==target){
                start=mid;
                h=mid-1;
            }
            else if(arr[mid]<target)l=mid+1;
            else h=mid-1;
        }
        l=0,h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]==target){
                end=mid;
                l=mid+1;
            }
            else if(arr[mid]<target)l=mid+1;
            else h=mid-1;
        }
        if (start == -1 || end == -1) return 0;
        return end-start+1;
    }
};



//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends