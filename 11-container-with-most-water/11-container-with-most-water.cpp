class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int r=n-1,l=0;
        int maxi=INT_MIN;
        int maxs=0;
        while(l<r){
            maxs=min(height[l],height[r])*(r-l);
            maxi=max(maxs,maxi);
            if(height[l]<height[r])l++;
            else r--;
        }
        return maxi;
    }
};