// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

// Example 1:

// Input: s = "egg", t = "add"

// Output: true


//Solution-------------------------------------------------TC= O(n), SC= O(1)
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        int map_s[128] = {0};
        int map_t[128] = {0};

        for(int i = 0 ; i<n ; i++){
            if(map_s[s[i]] != map_t[t[i]]) return false;
            map_s[s[i]] = i+1;
            map_t[t[i]] = i+1;
        }
        return true;
    }
};
