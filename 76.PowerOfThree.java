/*
Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.

 

Example 1:

Input: n = 27
Output: true
Explanation: 27 = 33
Example 2:

Input: n = 0
Output: false
Explanation: There is no x where 3x = 0.
Example 3:

Input: n = -1
Output: false
Explanation: There is no x where 3x = (-1).
*/

class Solution {
    public boolean isPowerOfThree(int n) {
        //Optimal:- O(1)
        //The largest power of 3 that fits in a signed 32-bit integer is 1162261467 (3¹⁹).
        //If n is a power of three, it must divide this number exactly.

        return n > 0 && 1162261467 % n == 0;

        //Better:--O(log₃ n)
        if(n<=0) return false;
        while(n % 3== 0){
            n = n/3;
        }
        return n == 1;

        //Brute Force: O(n)
        for(int i = 0; i<=19 ; i++){
            if(n == Math.pow(3,i)){
                return true;
            }
        }
        return false;
    }
}
