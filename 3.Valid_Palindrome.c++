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
