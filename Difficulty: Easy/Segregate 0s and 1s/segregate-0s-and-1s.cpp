// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n=arr.size();
        int s=0,e=n-1;
        while(s<e){
            if(arr[s]==0){
                s++;
            }else if(arr[s]==1){
                if(arr[e]==0){
                    swap(arr[s],arr[e]);
                    s++;
                    e--;
                }else if (arr[e]==1){
                    e--;
                }
            }
        }
    }
};