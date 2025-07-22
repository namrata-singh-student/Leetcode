// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]

class Solution {
public:
    int findLeftMost(vector<int>nums,int target,int n){
        int l=0,r=n-1;
        int left_most=-1;
        while(l<=r){
            int mid= l+(r-l)/2;
            if(nums[mid]==target){
                left_most= mid;
                r=mid-1;
            }else if(nums[mid]<target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return left_most;
    }
     int findRightMost(vector<int>nums,int target,int n){
        int l=0,r=n-1;
        int right_most=-1;
        while(l<=r){
            int mid= l+(r-l)/2;
            if(nums[mid]==target){
                right_most= mid;
                l=mid+1;
            }else if(nums[mid]<target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return right_most;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int left_most= findLeftMost(nums,target,n);
        int right_most= findRightMost(nums,target,n);
        return {left_most,right_most};
    }
};
