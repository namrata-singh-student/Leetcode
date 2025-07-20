// problem:
// You are given a positive integer n. Determine whether n is divisible by the sum of the following two values:

// The digit sum of n (the sum of its digits).

// The digit product of n (the product of its digits).

// Return true if n is divisible by this sum; otherwise, return false.

 

// Example 1:

// Input: n = 99

// Output: true

// Explanation:

// Since 99 is divisible by the sum (9 + 9 = 18) plus product (9 * 9 = 81) of its digits (total 99), the output is true.


class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;  // Save the original number
        int digitSum = 0;
        int digitProduct = 1;
        while(n!=0){
            int rem = n%10;
            digitSum += rem;
            digitProduct *= rem;
            n = n/10;
        }
        int sum = (digitSum + digitProduct);
        if (sum == 0) return false;  // avoid division by zero

        return (original % sum == 0);
    }
};
