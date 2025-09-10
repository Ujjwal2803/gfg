class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int l=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>l){
                l=arr[i];
            }
        }
        int l2=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>l2 && arr[i]!=l){
                l2=arr[i];
            }
        }
        return l2;
    }
};