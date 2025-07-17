#include<unordered_set>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // unordered_set<int> s;
        // for(int i=0;i<nums.size();i++){
        //     s.insert(nums[i]);
        // }
        
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     int curr= nums[i];//3
        //     int prev= curr-1; //2
        //     int count=0;
        //     if(s.find(prev)==s.end()){
        //         while(s.find(curr)!=s.end()){
        //             curr++;
        //             count++;
        //         }
        //     }
        //     ans=max(ans,count);
        // }
        // return ans;
        int n=nums.size();
        if(n==0) return 0;
        unordered_set<int>s;
        for(int num: nums){
            s.insert(num);
        }
        int longest=1;
        for(auto it: s){
            int count=1;
            int curr= it;//first element i can say curr element
            if(s.find(curr-1)==s.end()){
                while(s.find(curr+1)!=s.end()){
                    curr=curr+1;
                    count++;
                }
            }
            longest= max(longest,count);
        }
        return longest;
    }
};
