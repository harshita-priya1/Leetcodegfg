class Solution {
public:
    int ansf(vector<int>&nums,vector<int>&dp,int n,int i){
        if(i>n-1)return 0;
        if(dp[i]!=-1)return dp[i];
        int sum1=ansf(nums,dp,n,i+1);
        int sum2=nums[i] +ansf(nums,dp,n,i+2);
        return dp[i]=max(sum1,sum2);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector <int>dp(n,-1);
        int i=0;
        int ans=ansf(nums,dp,n,i);
        return ans;
        
    }
};