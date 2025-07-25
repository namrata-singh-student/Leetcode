// You are given two lists of closed intervals, firstList and secondList, where firstList[i] = [starti, endi] and secondList[j] = [startj, endj]. Each list of intervals is pairwise disjoint and in sorted order.

// Return the intersection of these two interval lists.

// A closed interval [a, b] (with a <= b) denotes the set of real numbers x with a <= x <= b.

// The intersection of two closed intervals is a set of real numbers that are either empty or represented as a closed interval. For example, the intersection of [1, 3] and [2, 4] is [2, 3].

 

// Example 1:


// Input: firstList = [[0,2],[5,10],[13,23],[24,25]], secondList = [[1,5],[8,12],[15,24],[25,26]]
// Output: [[1,2],[5,5],[8,10],[15,23],[24,24],[25,25]]

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int m = firstList.size();
        int n = secondList.size();
        int ptr1 = 0, ptr2 = 0;
        vector<vector<int>>res;
        vector<int>temp(2);
        while(ptr1 < m && ptr2 < n){
            if(firstList[ptr1][0] <= secondList[ptr2][1] && firstList[ptr1][1] >= secondList[ptr2][0]){
                temp[0] = max(firstList[ptr1][0], secondList[ptr2][0]);
                temp[1] = min(firstList[ptr1][1] , secondList[ptr2][1]);
                res.push_back(temp);
            }
            if(firstList[ptr1][1] > secondList[ptr2][1]){
                ptr2++;
            }else{
                ptr1++;
            }
        }
        return res;
    }
};
