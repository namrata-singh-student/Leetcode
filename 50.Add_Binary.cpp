// Given two binary strings a and b, return their sum as a binary string.

// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"

//TC= O(m+n), SC= O(1)
class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.length();
        int n = b.length();
        int carry = 0;
        string ans="";
        int i =0;
        while(i < m || i<n || carry != 0){
            int x = 0;
            if(i < m && a[m - i -1] == '1'){
                x =1;
            }
            int y = 0;
            if(i < n && b[n -i -1] == '1'){
                y = 1;
            }
            ans = to_string((x+y+carry) % 2) + ans;
            carry = (x+y+carry) / 2;
            i+=1;
        }
        return ans;
    }
};
