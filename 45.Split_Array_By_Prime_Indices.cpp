// Problem: 
// You are given an integer array nums.

// Split nums into two arrays A and B using the following rule:

// Elements at prime indices in nums must go into array A.
// All other elements must go into array B.
// Return the absolute difference between the sums of the two arrays: |sum(A) - sum(B)|.

// A prime number is a natural number greater than 1 with only two factors, 1 and itself.

// Note: An empty array has a sum of 0.

 

// Example 1:

// Input: nums = [2,3,4]

// Output: 1

// Explanation:

// The only prime index in the array is 2, so nums[2] = 4 is placed in array A.
// The remaining elements, nums[0] = 2 and nums[1] = 3 are placed in array B.
// sum(A) = 4, sum(B) = 2 + 3 = 5.
// The absolute difference is |4 - 5| = 1.
// Example 2:

// Input: nums = [-1,5,7,0]

// Output: 3

// Explanation:

// The prime indices in the array are 2 and 3, so nums[2] = 7 and nums[3] = 0 are placed in array A.
// The remaining elements, nums[0] = -1 and nums[1] = 5 are placed in array B.
// sum(A) = 7 + 0 = 7, sum(B) = -1 + 5 = 4.
// The absolute difference is |7 - 4| = 3.©leetcode

//Solution

class Solution {
public:
    bool isPrime(int num){
        // int i ,sqr ;
        // sqr= sqrt(num);
        if (num <= 1) return false;
        if (num == 2) return true;
        if (num % 2 == 0) return false;
        for (int i = 3; i * i <= num; i += 2) {
            if (num % i == 0) return false;
        }
    return true;
    }
    long long splitArray(vector<int>& nums) {
        if(nums.size() == 0 ) return 0;
        vector<int>arr1;
        vector<int>arr2;
        long long sum1 = 0;
        long long sum2 = 0;
        for(int i = 0; i<nums.size() ;i++){
            if(isPrime(i)){
                // arr1.push_back(nums[i]);
                sum1 += nums[i];
            }else{
                //arr2.push_back(nums[i]);
                sum2 += nums[i];
            }
        }
        //long long diff = abs(sum1 - sum2);
        return abs(sum1 - sum2);
    }
};©leetcode
