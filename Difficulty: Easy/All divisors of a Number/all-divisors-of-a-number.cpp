// class Solution {
//   public:
//     void print_divisors(int n) {
//         // Code here
//         for(int i=1;i<=n;i++){
//             if(n%i==0){
//                 cout<<i<<" ";
//             }
//         }
//     }
// };

class Solution {
  public:
    void print_divisors(int n) {
        vector<int> divisors;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i != n / i) {   // avoid duplicate when i*i == n
                    divisors.push_back(n / i);
                }
            }
        }
        sort(divisors.begin(), divisors.end()); // sorted order
        for (int d : divisors) {
            cout << d << " ";
        }
    }
};