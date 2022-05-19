class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxs=INT_MIN;
        for(auto i:nums){
            sum+=i;
            maxs=max(sum,maxs);
            if(sum<0)sum=0;
        }
        return maxs;
    }
};