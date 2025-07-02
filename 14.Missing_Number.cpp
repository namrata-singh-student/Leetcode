class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int sum =0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        long long actualSum = (((long long) (n+1)*n)/2);
        long long missNo = (actualSum - sum);
        return int(missNo);
    }
};
