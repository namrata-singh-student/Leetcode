class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int count=0;
        // int element;
        // for(int i=0;i<nums.size();i++){
        //     if(count==0){
        //         count=1;
        //         element=nums[i];
        //     }else if(nums[i]==element){
        //         count++;
        //     }else{
        //         count--;
        //     }
        // }
        // int count1=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==element){
        //         count1++;
        //     }
        // }    
        // if(count1>nums.size()/2){
        //         return element;
        // }
        // return -1;
        int count=0;
        int maj= NULL;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                maj=nums[i];
                count=1;
            }else if(nums[i]==maj){
                count++;
            }else{
                count--;
            }
        }
        return maj;
    }
};
