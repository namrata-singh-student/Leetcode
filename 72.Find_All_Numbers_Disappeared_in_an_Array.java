/*
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

 

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
Example 2:

Input: nums = [1,1]
Output: [2]
  */
//JAVA code
class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        List<Integer> result = new ArrayList<>();

        for (int num : nums) {
            freq.put(num, freq.getOrDefault(num, 0) + 1);
        }

        for (int i = 1; i <= nums.length; i++) {
            if (!freq.containsKey(i)) {
                result.add(i);
            }
        }
        return result;
    }
}

//C++ Code
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>result;
        for(int num : nums){
            mp[num]++;
        }
      // Check which numbers from 1 to n are missing
        for(int i=1 ; i<=nums.size(); i++){
            if(mp[i] == 0){
                result.push_back(i);
            }
        }
        return result;
    }
};
