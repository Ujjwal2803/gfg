// User function Template for Java

class Solution {
    boolean isprime(int n){
        if(n<2)return false;
        for(int i=2;i * i <= n;i++){
            if(n%i==0)return false;
        }
        return true;
    }
    ArrayList<Integer> primeRange(int M, int N) {
        // code here
        ArrayList<Integer> p=new ArrayList<>();
        for(int i=M;i<=N;i++){
            if(isprime(i)){
                p.add(i);
            }
        }
        return p;
    }
    
}