class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size();
        if(n==0) return "";
        sort(strs.begin(),strs.end());
        string str1= strs[0];
        string str2= strs[n-1];
        int idx=0;
        while (idx < str1.size() && idx < str2.size() && str1[idx] == str2[idx]) {
            idx++;
        }
        return str1.substr(0,idx);
    }
};
