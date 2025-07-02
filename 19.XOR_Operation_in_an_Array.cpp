class Solution {
public:
    int xorOperation(int n, int start) {
        int XOR = 0;
        vector<int>arr(n,0);
        for(int i = 0; i<n; i++){
            arr[i] = (start + 2 * i);
            XOR = XOR ^ arr[i];
        }
        return XOR;
    }
};
