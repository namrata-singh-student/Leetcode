/*
A transformation sequence from word beginWord to word endWord using a dictionary wordList is a sequence of words beginWord -> s1 -> s2 -> ... -> sk such that:

Every adjacent pair of words differs by a single letter.
Every si for 1 <= i <= k is in wordList. Note that beginWord does not need to be in wordList.
sk == endWord
Given two words, beginWord and endWord, and a dictionary wordList, return the number of words in the shortest transformation sequence from beginWord to endWord, or 0 if no such sequence exists.

 

Example 1:

Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]
Output: 5
Explanation: One shortest transformation sequence is "hit" -> "hot" -> "dot" -> "dog" -> cog", which is 5 words long.
Example 2:

Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log"]
Output: 0
Explanation: The endWord "cog" is not in wordList, therefore there is no valid transformation sequence.

*/

//Solution in Java
/*
TC= O(N×L×26)
SC=O(N)
*/

class Pair{
    String first;
    int second;
    Pair(String _first , int _second){
        this.first = _first;
        this.second = _second;
    }
}
class Solution {
    public int ladderLength(String beginWord, String endWord, List<String> wordList) {
        int n = wordList.size();
        Queue<Pair>q = new LinkedList<>();
        q.add(new Pair(beginWord , 1));
        Set<String>st = new HashSet<String>();
        for(int i = 0 ; i<n ; i++){
            st.add(wordList.get(i));
        }
        st.remove(beginWord);
        while(!q.isEmpty()){
            String word = q.peek().first;
            int steps = q.peek().second;
            q.remove();
            if(word.equals(endWord)){
                return steps;
            }
            for(int i = 0 ;i<word.length(); i++){
                for(char ch = 'a' ; ch <= 'z' ; ch++){
                    char replacedCharArray[] = word.toCharArray();
                    replacedCharArray[i] = ch;
                    String replacedWord = new String(replacedCharArray);
                    if(st.contains(replacedWord) == true){
                        st.remove(replacedWord);
                        q.add(new Pair(replacedWord , steps+1));
                    }
                }
            }
        }
        return 0;
    }
}

//c++
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n = wordList.size();
        queue<pair<string,int>>q;
        q.push({beginWord , 1});
        unordered_set<string>st(wordList.begin() , wordList.end());
        st.erase(beginWord);
        while(!q.empty()){
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();
            if(word == endWord){
                return steps;
            }
            for(int i = 0 ;i<word.length(); i++){
                char originalChar = word[i];
                for(char ch = 'a' ; ch <= 'z' ; ch++){
                    word[i] = ch;
                    if(st.find(word) != st.end()){
                        st.erase(word);
                        q.push({word , steps+1});
                    }
                }
                word[i] = originalChar;
            }
        }
        return 0;
    }
};


