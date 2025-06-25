// User function Template for C++
class Solution {
  public:
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        // code here
        vector<vector<int>>p;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                vector<int>q;
                for(int k=i;k<=j;k++){
                    q.push_back(arr[k]);
                }
                p.push_back(q);
            }
        }
        return p;
    }
};