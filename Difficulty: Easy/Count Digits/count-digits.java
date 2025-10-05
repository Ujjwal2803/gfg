class Solution {
    public int countDigits(int n) {
        // code here
        int p=0;
        while(n!=0){
            p++;
            n/=10;
        }
        return p;
    }
}
