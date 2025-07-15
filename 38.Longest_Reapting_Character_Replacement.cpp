//Sliding Window Approach
//TC = O(n), SC =O(1)
class Solution {
public:
    int characterReplacement(string s, int k) {
        // int freq[26] = {0}; or
        vector<int> freq(26, 0);
        int left = 0;
        int maxFreq = 0;
        int maxWindow = 0;
        for(int right = 0; right <s.length(); right++){
            //update the frequency of the current character
            freq[s[right]  - 'A']++;

            //update the max frequency
            maxFreq = max(maxFreq, freq[s[right] - 'A']);
            int windowLength = right - left +1;

            //If the windowLength - max frequency > k,
            //then we need to shrink the window

            if(windowLength - maxFreq > k){
                freq[s[left] - 'A']--;
                left++;
            }
            windowLength = right - left +1;
            maxWindow = max(maxWindow, windowLength);
        }
        return maxWindow;
    }
};

//java code
class Solution {
    public int characterReplacement(String s, int k) {
        int freq[] = new int[26];
        int left = 0;
        int maxFreq = 0;
        int maxWindow = 0;
        for(int right = 0; right <s.length(); right++){
            //update the frequency of the current character
            freq[s.charAt(right) - 'A']++;
            //update the max frequency
            maxFreq = Math.max(maxFreq, freq[s.charAt(right) - 'A']);
            int windowLength = right - left +1;

            //If the windowLength - max frequency > k,
            //then we need to shrink the window

            if(windowLength - maxFreq > k){
                freq[s.charAt(left) - 'A']--;
                left++;
            }
            windowLength = right - left +1;
            maxWindow = Math.max(maxWindow, windowLength);
        }
        return maxWindow;
    }
};
