class Solution {
public:
    bool isAnagram(string s, string t) {
        //Time complexity-- O(n log(n))
         sort(begin(s),end(s));
         sort(begin(t),end(t));
         return s==t;
        
        //Optimized code---- 
         vector<int>count(26,0);
        for(char &ch :s){
             count[ch -'a']++;
         }
        for(char &ch :t){
             count[ch -'a']--;
         }
         bool allZeros = all_of(begin(count),end(count),[] (int element){
             return element==0;
         });
         return allZeros;

        //One more way---- o(n+m)
        unordered_map<int,int>sc;
        unordered_map<int ,int>tc;
        for(auto &ch :s){
            sc[ch]++;
        }
        for(auto &ch :t){
            tc[ch]++;
        }
        return sc == tc;
    }
};
