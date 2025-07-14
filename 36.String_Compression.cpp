class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        int i = 0;
        int n = chars.size();
        while(i<n){
            char curr_char = chars[i];
            int count = 0;
            while(i<n && chars[i]== curr_char){
                count++;
                i++;
            }
            chars[index] = curr_char;
            index++;
            
            if(count > 1){
                string count_str = to_string(count);
                for(char ch : count_str){
                    chars[index] = ch;
                    index++;
                }
            }
        }
        return index;
    }
};

//java code
class Solution {
    public int compress(char[] chars) {
        int index = 0; // Index to insert the compressed characters
        int i = 0;     // Pointer to iterate through the array
        int n = chars.length;

        while (i < n) {
            char currChar = chars[i];
            int count = 0;

            // Count the occurrences of the current character
            while (i < n && chars[i] == currChar) {
                count++;
                i++;
            }

            // Insert the current character
            chars[index++] = currChar;

            // If count > 1, insert each digit of the count
            if (count > 1) {
                String countStr = Integer.toString(count);
                for (char ch : countStr.toCharArray()) {
                    chars[index++] = ch;
                }
            }
        }

        return index;
    }
}
