
class Solution {
    public static void print_divisors(int n) {
        // code here
        ArrayList<Integer> p = new ArrayList<>();
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                p.add(i);
                if (i != n / i) {  // to avoid duplicate when n is a perfect square
                    p.add(n / i);
                }
            }
        }
        Collections.sort(p);
        for(int d:p){
            System.out.print(d+" ");
        }
    }
}
// vector<int> divisors;
//         for (int i = 1; i * i <= n; i++) {
//             if (n % i == 0) {
//                 divisors.push_back(i);
//                 if (i != n / i) {   // avoid duplicate when i*i == n
//                     divisors.push_back(n / i);
//                 }
//             }
//         }
//         sort(divisors.begin(), divisors.end()); // sorted order
//         for (int d : divisors) {
//             cout << d << " ";
//         }