class Solution {
public:

    int cStairs(int i, vector<int>&dp){
        if(i==0||i==1)return 1;
        if(i==2)return 2;
        if(dp[i]!=-1)return dp[i];
        else dp[i]=cStairs(i-1,dp)+cStairs(i-2,dp);
        return dp[i];
    }
    int climbStairs(int n) {
        int i=n;
        vector<int>dp(n+1,-1);
        int ans=cStairs(i,dp);
        return ans;
        
    }
};