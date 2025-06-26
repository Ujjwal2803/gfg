

class Solution {
  public:
    // Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix) {
        // code here
        vector<int>p;
        int n = matrix.size();           
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<m;j++){
                    p.push_back(matrix[i][j]);
                }
            }else{
                for(int j=m-1;j>=0;j--){
                    p.push_back(matrix[i][j]);
                }
            }
        }
        return p;
    }
};