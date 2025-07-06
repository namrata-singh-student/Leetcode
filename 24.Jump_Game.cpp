class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxIdx = 0;
        for(int i=0; i<n;i++){
            if(maxIdx < i) return false;
            maxIdx = max(maxIdx , i+nums[i]);
        }
        return true;
    }
};
