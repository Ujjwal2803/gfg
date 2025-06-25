class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,vector<int>& rightIndex){
        vector<int>res;
        
        int n=leftIndex.size();
        for(int i=0;i<n;i++){
            int sum=0;
            int maxn=INT_MIN;
            for(int j=leftIndex[i];j<=rightIndex[i];j++){
                sum+=arr[j];
                maxn=max(maxn,sum);
            }
            res.push_back(maxn);
        }
        return res;
    }
};