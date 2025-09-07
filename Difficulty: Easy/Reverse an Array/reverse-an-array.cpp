class Solution {
  public:
    
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        print(arr,0,n-1);
    }
    void print(vector<int>&arr,int l,int r){
        if(l>=r)return;
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        print(arr,l+1,r-1);
    }
};