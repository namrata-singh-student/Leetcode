// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. 
//The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits.

// Example 1:

// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n =digits.size();
        for(int i = n-1; i>=0;i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }else{
                digits[i] = 0;
            }
        }
        digits.push_back(0);
        digits[0] =1;
        return digits;
    }
};
