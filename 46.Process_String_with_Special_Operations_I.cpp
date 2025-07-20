// You are given a string s consisting of lowercase English letters and the special characters: *, #, and %.

// Build a new string result by processing s according to the following rules from left to right:

// If the letter is a lowercase English letter append it to result.
// A '*' removes the last character from result, if it exists.
// A '#' duplicates the current result and appends it to itself.
// A '%' reverses the current result.
// Return the final string result after processing all characters in s.


// Example 1:

// Input: s = "a#b%*"

// Output: "ba"

// Explanation:

// i	s[i]	Operation	Current result
// 0	'a'	Append 'a'	"a"
// 1	'#'	Duplicate result	"aa"
// 2	'b'	Append 'b'	"aab"
// 3	'%'	Reverse result	"baa"
// 4	'*'	Remove the last character	"ba"
// Thus, the final result is "ba".

//Solution------------------------------------------------------------
class Solution {
public:
    string processStr(string s) {
        int n = s.length();
        string result = "";
        for(int i=0 ;i<n ;i++){
            if(islower(s[i])){
                result.push_back(s[i]);
            }else if(s[i]=='#'){
                result += result;
            }else if(s[i]=='%'){
                reverse(result.begin(),result.end());
            }else if(s[i]=='*'){
                if (!result.empty()) {
                    result.pop_back();
                }
            }
        }
        return result;
    }
};
