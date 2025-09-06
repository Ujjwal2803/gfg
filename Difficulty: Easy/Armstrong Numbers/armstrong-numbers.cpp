// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int temp=n;
        int x=0;
        while(temp>0){
            x++;
            temp/=10;
        }
        temp=n;
        int sum=0;
        while(temp>0){
            sum+=pow(temp%10,x);
            temp/=10;
        }
        if(n==sum){
            return true;
        }
        return false;
    }
};