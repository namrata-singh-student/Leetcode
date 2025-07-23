class Solution {
public:
    bool rotateString(string s, string goal) {
        int m = s.length();
        int n = goal.length();

        if(m != n) return false;

        //Otimal-------- TC= O(n)
        if((s+s).find(goal) != string :: npos) return true;
        else return false;
//Brutr Focre--------------------------->>TC =O(N2)
        // for(int i =1; i<=m ;i++){
        //     rotate(begin(s), begin(s) + 1 ,end(s));
        //     if(s == goal) return true;
        // }
        // return false;
    }
};
