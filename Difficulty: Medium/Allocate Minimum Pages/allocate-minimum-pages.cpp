class Solution {
    bool ispossible(vector<int> &arr, int mid, int k) {
        int student = 1;
        int readpages = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > mid) return false; // Can't assign book with more pages than mid

            if(readpages + arr[i] <= mid) {
                readpages += arr[i];
            } else {
                student++;
                readpages = arr[i];
            }

            if(student > k) return false;
        }
        return true;
    }

public:
    int findPages(vector<int> &arr, int k) {
        if(k > arr.size()) return -1;

        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        int result = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(ispossible(arr, mid, k)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }
};



// class Solution {
//     bool ispossible(vector<int> &arr, int mid ,int k){
//         int student=1;
//         int readpages=0;
//         for(int i=0;i<arr.size();i++){
//             if((readpages+arr[i])<=mid){
//                 readpages+=arr[i];
                
//             }else{
//                 student++;
//                 readpages = arr[i];
//             }
//             if(student > k)return false;
//         }
//         return true;
//     }
//   public:
//     int findPages(vector<int> &arr, int k) {
//         // code here
//         int total=0;
//         int ans=-1;
//         if(k > arr.size()) return -1;
//         for(int i=0;i<arr.size();i++){
//             total+=arr[i];
//         }
//         int s=1,e=total;
//         while(s<=e){
//             int mid=(s+e)/2;// capacity of 1 student
//             if(ispossible(arr,mid,k)){
//                 ans=mid;
//                 e=mid-1;
//             }else{
//                 s=mid+1;
//             }
//         }
//         return ans;
//     }
// };