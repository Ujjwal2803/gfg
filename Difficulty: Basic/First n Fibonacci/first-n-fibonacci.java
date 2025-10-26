// User function Template for Java

class Solution {
    // Function to return list containing first n fibonacci numbers.
    public static int[] fibonacciNumbers(int n) {
        // Your code here
        int[] fib = new int[n];
        int a=0;
        int b=1;
        for(int i=0;i<n;i++){
            fib[i] = a;
            int c=a+b;
            a=b;
            b=c;
        }
        return fib;
    }
}