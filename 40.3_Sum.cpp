class Solution {
public:
    vector<vector<int>>result;
    void twoSum(vector<int>&nums,int target,int i,int j){
        while(i<j){
            if(nums[i]+nums[j]>target){
                j--;
            }
            else if(nums[i]+nums[j]<target){
                i++;
            }
            else{
                //first we will remove duplicate value either end(i,j)
                while(i<j && nums[i]==nums[i+1]) i++;
                while(i<j && nums[j]==nums[j-1]) j--;
                
                result.push_back({-target,nums[i],nums[j]});
                i++;
                j--;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        if(n<3){
            return {};
        }
        result.clear();
        //Sort
        // sort(begin(nums),end(nums));
        sort(nums.begin(), nums.end());
        
        //fixing one element: n1
        for(int i=0;i<=n-3;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int n1= nums[i];
            int target =-n1;
            twoSum(nums,target,i+1,n-1);//it will find n2 and n3:(n1,n2,n3)
        }
        return result;
    }
    
    //other approach
    // vector<vector<int>> threeSum(vector<int>& nums) {
    //     vector<vector<int> ans;
    //     sort(nums.begin(),nums.end());
    //     for(int i=0;i<n;i++){
    //         if(i>0 && arr[i]==arr[i-1]) continue;
    //         int j=i+1;
    //         int k=n-1;
    //         while(j<k){
    //             int sum= arr[i]+arr[j]+arr[k];
    //             if(sum<0){
    //                 j++;
    //             }
    //             else if(sum>0){
    //                 k--;
    //             }
    //             else{
    //                 vector<int>temp= {num[i],num[j],num[k]};
    //                 ans.push_back(temp);
    //                 j++;
    //                 k--;
    //                 while(j<k && arr[j]==arr[j-1]) j++;
    //                 while(j<k && arr[k]==arr[k+1]) k--;
    //             }
    //         }
    //     }
    //     return ans;
};
