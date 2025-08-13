/*
Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.

 

Example 1:

Input: n = 16
Output: true
Example 2:

Input: n = 5
Output: false
Example 3:

Input: n = 1
Output: true
*/

class Solution {
    public boolean isPowerOfFour(int n) {
        /*Optimal: O(1)
          A number is a power of four if: 
          It’s a power of two (n & (n - 1) == 0)
          It has the 1-bit at an odd position (counting from 0).
          The mask 0x55555555 (binary 01010101...) keeps only bits in odd positions.
        */
        return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555) != 0;

        //Better : O(log₄ n)
        if(n <= 0 ) return false;
        while(n % 4 == 0){
            n = n/4;
        }
        return n == 1;

      //Brute: O(n)
        for(int i = 0 ; i<=15 ;i++){
            if(n == Math.pow(4,i)){
                return true;
            }
        }
        return false;
    }
}
