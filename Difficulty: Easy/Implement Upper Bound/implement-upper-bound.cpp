
// User function Template for C++
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int l=0,h=arr.size();
        while(l<h){
            int mid=l+(h-l)/2;
            if(arr[mid]<=target){
                l=mid+1;
            }else{
                h=mid;
            }
        }
        return h;
    }
};


