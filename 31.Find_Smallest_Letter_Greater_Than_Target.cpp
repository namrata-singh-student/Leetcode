class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int l = 0, r = n-1;
        int pos = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(letters[mid] > target){
                pos = mid;
                r = mid-1;
            }else{
                l=mid+1;
            }
        }
        if(pos == -1){
            return letters[0];
        }else{
            return letters[pos];
        }
    }
};
//one more way by using c++ stl and TC for both is O(log n)
        int n = letters.size();
        int idx = upper_bound(letters.begin(),letters.end(),target) - letters.begin();
        if(idx == n){
            return letters[0];
        }
        return letters[idx];
