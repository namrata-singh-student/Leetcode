class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        //TC= O(n2), SC= O(n)
        vector<int>sorted =(nums);
        sort(sorted.begin(),sorted.end());
        for(int r=0;r<n;r++){
            bool isSorted = true;
            for(int i=0;i<n;i++){
                if(sorted[i]!= nums[(i+r)%n]){
                    isSorted = false;
                    break;
                }
            }
            if(isSorted){
                return true;
            }
        }
        return false;

        //Optimal--------tc- o(n), SC= o(1)
        // int peak=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i] > nums[(i+1)%n]){
        //         peak++;
        //     }
        // }
        // if(peak>1){
        //     return false;
        // }else{
        //     return true;
        // }

    }
};
