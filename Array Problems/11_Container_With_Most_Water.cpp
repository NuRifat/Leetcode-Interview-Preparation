class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1;
        int maxWater = 0;

        while(l<r){
            int w = r-l;
            int h = min(height[l], height[r]);
            int curWater = w*h;
            maxWater = max(maxWater, curWater);

            height[l]<height[r] ? l++ : r--;
        }
        return maxWater;
    }
};