class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        int low = 0;
        int high = n-1;
        if(n==1) return 0;
        while(low<=high){
            int mid = (low+high)/2;
            if(mid==0){
                if(nums[mid]>nums[mid+1]){
                    return mid;
                }else{
                    low = (mid+1);
                }
            }else if(mid == (n-1)){
                if(nums[mid] > nums[mid-1]) {
                    return mid;
                }else{
                    high = mid-1;
                }
            }else{
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                    return mid;
                }else if(nums[mid]<nums[mid+1]){
                        low = (mid+ 1);
                }else{
                    high =( mid-1);
                }
            }
        }
        return -1;
        // if(n == 1) return 0;
        
        // for(int i=1 ;i<n-1 ;i++){
        //     if(nums[0]> nums[i]) return 0;
        //     if(nums[i]>nums[i+1] && nums[i]>nums[i-1]){
        //         return i;
        //     }
        // }
        // return -1;
    }
};
