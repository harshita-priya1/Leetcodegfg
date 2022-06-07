class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int r=n-1,l=0;
        int maxim=INT_MIN;
        int maxs=0;
        while(l<r){
            maxs=min(height[l],height[r])*(r-l);
            maxim=max(maxs,maxim);
            if(height[l]<height[r])l++;
            else r--;
        }
        return maxim;
    }
};