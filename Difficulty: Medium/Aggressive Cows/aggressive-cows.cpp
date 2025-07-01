// User function Template for C++

class Solution {
    bool ispossible(vector<int> &stalls,int mid, int k){
        int cow=1;
        int pos=stalls[0];
        for(int i=1;i<stalls.size();i++){
            if((stalls[i]-pos)>=mid){
                cow++;
                pos=stalls[i];
            }
            if(cow==k)return true;
        }
        return false;
    }
  public:

    int aggressiveCows(vector<int> &stalls, int k) {
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int ans=-1;
        int s=1,e=stalls[stalls.size()-1]-stalls[0];
        while(s<=e){
            int mid=(s+e)/2;//atleast distance between two cows
            if(ispossible(stalls,mid,k)){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans;
    }
};