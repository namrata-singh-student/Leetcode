class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //direct using c++ inbuilt function
        next_permutation(nums.begin(), nums.end());

        //without using c++ inbuilt function
        // int n=nums.size();
        // int gola_index=-1;
        // for(int i=n-1;i>0;i--){
        //     if(nums[i]>nums[i-1]){
        //         gola_index= i-1;
        //         break;
        //     }
        // }
        // //to find just bigger number and swapping
        // if(gola_index!= -1){
        //     int swap_index =gola_index;
        //     for(int j=n-1;j>= gola_index+1; j--){
        //         if(nums[j]>nums[gola_index]){
        //             swap_index= j;
        //             break;
        //         }
        //     }
        //     swap(nums[gola_index],nums[swap_index]);
        // }
        // reverse(nums.begin() +gola_index+1, nums.end());
    }
};
