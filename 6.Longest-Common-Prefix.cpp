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
--------------------------------------------------------
    //java code
    class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length==0) return "";
        Arrays.sort(strs);
        String str1 = strs[0];
        String str2 = strs[strs.length-1];
        int index=0;
        while(index <str1.length() && index < str2.length() && 
        str1.charAt(index) == str2.charAt(index)){
            index++;
        }
        return str1.substring(0,index);
    }
}
