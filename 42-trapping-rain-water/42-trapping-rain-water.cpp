class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>lmax(n,-1);
        vector<int>rmax(n,-1);
        lmax[0]=height[0];
        rmax[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            lmax[i]=max(lmax[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],height[i]);
        }
        int sum=0;
        for(int i=1;i<n-1;i++){
            sum=sum+min(lmax[i],rmax[i])-height[i];
                     }
        return sum;             
                   
    }
};