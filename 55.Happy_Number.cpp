// Write an algorithm to determine if a number n is happy.

// A happy number is a number defined by the following process:

// Starting with any positive integer, replace the number by the sum of the squares of its digits.
// Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
// Those numbers for which this process ends in 1 are happy.
// Return true if n is a happy number, and false if not.

 

// Example 1:

// Input: n = 19
// Output: true
// Explanation:
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1


//Time Complexity	O(k² + k log n)	
//Space Complexity	O(k)


class Solution {
public:
    bool isHappy(int n) {
        vector<int>ans;
        while(1){
            int sum = 0;
            while(n!=0){
                int rem = n%10;
                sum += rem*rem;
                n = n/10;
            }
            if(sum == 1){
                return true;
            }
            n =sum;
            if (find(ans.begin(), ans.end(), sum) != ans.end()) {
                return false;
            }
            ans.push_back(n);
        }
    }
};
