class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        int l=0;
        for(int i=0;i<arr.size();i++){
            l+=arr[i];
            int r=sum-l;
            if(l==r){
                return true;
            }
        }
        return false;
    }
};
