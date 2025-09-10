class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int>ans;
        if(arr.size()==0)return ans;
        ans.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[i-1]){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};