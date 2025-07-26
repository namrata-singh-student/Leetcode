// Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

// Each letter in magazine can only be used once in ransomNote.

 

// Example 1:

// Input: ransomNote = "a", magazine = "b"
// Output: false
// Example 2:

// Input: ransomNote = "aa", magazine = "ab"
// Output: false
// Example 3:

// Input: ransomNote = "aa", magazine = "aab"
// Output: true


//TC = O(m + n), AC = O(1)
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};
        for(char ch : magazine){
            freq[ch - 'a']++;
        }
        for(char ch : ransomNote){
            if(freq[ch-'a'] == 0){
                return false;
            }
            freq[ch - 'a']--;
        }
        return true;
//using hashmap
     // unordered_map<int , int> mp;
     //    for(char ch : magazine){
     //        mp[ch]++;
     //    }
     //    for(auto c : ransomNote){
     //        if(mp[c] == 0){
     //            return false;
     //        }
     //        mp[c]--;
     //    }
     //    return true;
    }
};
