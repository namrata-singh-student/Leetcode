class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int maxWater=0;
        while(i<j){
            int h= min(height[i],height[j]);
            int w= j-i;
            int area=h * w;
            
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
            maxWater= max(maxWater, area);
            
        }
        return maxWater;
    }
};
