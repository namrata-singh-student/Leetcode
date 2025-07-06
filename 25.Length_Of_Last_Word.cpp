class Solution {
public:
    int lengthOfLastWord(string s) {
        // stringstream ss(s);
        // string word;
        // while (ss >> word) {
        //     // keeps extracting words
        // }
        // return word.length();

        int n =s.length();
        int i = n-1;
        int length = 0;
        while(i>=0 && s[i] == ' '){
            i--;
        }
        while(i >= 0 && s[i] != ' '){
            length++;
            i--;
        }
        return length;
    }
};
//For cpp TC= O(n), SC=O(1)
//java code TC= O(n), SC=O(1)
class Solution {
    public int lengthOfLastWord(String s) {
       
       String str =s.trim();
       int count =0;
        int n =str.length();
       for(int i = n-1; i>=0 ;i--){
            if(str.charAt(i)!= ' '){
                count++;
            }else{
                break;
            }
       } 
       return count;
    }
};
