#include<math.h>
class Solution {
public:
   int fib(int n){
    //Recursion approach---> And it is not good approach
    // if(n<=1) return n;
    // return fib(n-1) + fib(n-2);

     //Bottom up approach but with SC= O(n)
    if(n<=1) return n;
    vector<int>dp(n+1, -1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i<=n ;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];


     
     //To optimized SC , we are solving this qus using this approach with SC= O(1)
     
    // if(n<=1) return n;
    // int a = 0, b =1 ,c;
    // for(int i = 1; i<n ; i++){
    //     c = a+b;
    //     a = b;
    //     b = c;
    // }
    // return c;
   }
};
