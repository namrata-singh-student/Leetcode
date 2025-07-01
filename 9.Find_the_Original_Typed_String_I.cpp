class Solution {
public:
    int possibleStringCount(string word) {
        int n=word.length();
        int count=0;
        for(int i=1;i<n;i++){
            if(word[i]==word[i-1]){
                count++;
            }
        }
        return count+1;
    }
};

//java----------------------------------------------------------------------
class Solution {
    public int possibleStringCount(String word) {
        int n= word.length();
        int cnt=0;
        for(int i=1;i<n;i++){
            if( word.charAt(i)==word.charAt(i-1)){
                cnt++;
            }
        }
        return cnt+1;
    }
}
