class Solution {
public:
        
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        int rev=0;
        int original=x;
        while(x!=0){
            int rem =x%10;
            if (rev > (INT_MAX - rem) / 10) {
                return false; // Overflow, not a valid palindrome
            }
            rev= rev*10+rem;
            x=x/10;
        }
        if(rev==original){
            return true;
        }else{
            return false;
        }
    }
};
