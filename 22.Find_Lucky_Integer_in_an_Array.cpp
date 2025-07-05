class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int , int> mp;
        for(int i =0; i<arr.size() ; i++){
            mp[arr[i]]++;
        }
        int maxLuckyNo = -1;
        for(auto [num, freq] : mp){
            if(freq == num){
                maxLuckyNo = max(maxLuckyNo , num);
            }
        }
        return maxLuckyNo;
    }
};
