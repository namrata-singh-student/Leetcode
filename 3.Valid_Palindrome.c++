class Solution
{
public:
  bool isAlphanum(char ch)
  {
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
      return true;
    }
    return false;
  }
  bool isPalindrome(string s)
  {
    // int n=s.size();
    // int left=0,right=n-1;
    // while(left<right){
    //     if(!isalnum(s[left])){
    //         left++;
    //     }else if(!isalnum(s[right])){
    //         right--;
    //     }else if(tolower(s[left])!=tolower(s[right])){
    //         return false;
    //     }else{
    //         left++;
    //         right--;
    //     }
    // }
    // return true;
    int n = s.size();
    int st = 0;
    int end = n - 1;

    while (st < end)
    {
      if (!isAlphanum(s[st]))
      {
        st++;
        continue;
      }
      if (!isAlphanum(s[end]))
      {
        end--;
        continue;
      }
      if (tolower(s[st]) != tolower(s[end]))
      {
        return false;
      }
      st++;
      end--;
    }
    return true;
  }
};



----------------------------------------------------

//in java


  package string;
import java.util.*;
public class ValidPalindrome {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the string to check:");
		String str = sc.nextLine();
		boolean isPalindrome = isValidPalindrome(str);
		if(isPalindrome) {
			System.out.println("Valid Palindrome");
		}else {
			System.out.println("Not a Valid Palindrome");
		}
		sc.close();
	}
//Character.isLetterOrDigit---- to check char is alphanumeric or not
//Character.isLetterOrDigit---- to convert an uppercase letter to its lowercase equivalent
//str.charAt(left))---Java strings do not allow direct array-style index access like str[left]. Instead, you need to use the .charAt(index) method.
	public static 	boolean  isValidPalindrome(String str) {
		int n = str.length();
		int left= 0, right =n-1;
		while(left<right) {
			if(!Character.isLetterOrDigit(str.charAt(left))) {
				left++;
			}else if(!Character.isLetterOrDigit(str.charAt(right))) {
				right--;
			}else if(Character.toLowerCase(str.charAt(left))!=
					Character.toLowerCase(str.charAt(right))) {
				return false;
			}else {
				left++;
                right--;
			}
		}
		return true;
	}

}


//Another way to write java code
---------
// s = s.toLowerCase().replaceAll("[^A-Za-z0-9]", "");--------------
// s.toLowerCase():-------Converts the entire string to lowercase, ensuring that comparisons are case-insensitive.

// For example: "Aba" becomes "aba".

// s.replaceAll("[^A-Za-z0-9]", ""):

// Uses a regular expression to remove all characters that are not alphanumeric (letters or numbers).

// The pattern [^A-Za-z0-9] matches anything that is not a letter (A-Za-z) or a digit (0-9).

// The replaceAll method replaces all such characters with an empty string.

class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase().replaceAll("[^A-Za-z0-9]", "");
        int i =0;
        int j = s.length()-1;
        while(i<=j){
            if(s.charAt(i)!=s.charAt(j)){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}
