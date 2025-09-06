// class Solution {
//   public:
//     int gcd(int a, int b) {
//         // code here
//         int ans=1;
//         for(int i=2;i<=min(a,b);i++){
//             if(a%i==0 && b%i==0){
//                 ans=i;
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
