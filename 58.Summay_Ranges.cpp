// You are given a sorted unique integer array nums.

// A range [a,b] is the set of all integers from a to b (inclusive).

// Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

// Each range [a,b] in the list should be output as:

// "a->b" if a != b
// "a" if a == b
 

// Example 1:

// Input: nums = [0,1,2,4,5,7]
// Output: ["0->2","4->5","7"]
// Explanation: The ranges are:
// [0,2] --> "0->2"
// [4,5] --> "4->5"
// [7,7] --> "7"


//TC= O(N), SC = O(1)
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string>result;
        for(int i =0 ;i<n ;i++){
            int start = nums[i];
            while(i+1 < n && nums[i]+1 == nums[i+1]){
                i++;
            }
            if(start != nums[i]){
                result.push_back(to_string(start)+"->"+to_string(nums[i]));
            }else{
                result.push_back(to_string(start));
            }
        }
        return result;
    }
};
