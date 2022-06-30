class Solution {
public:
    int solve(int i,int previ,vector<int> nums,vector<vector<int>> &dp, int n){
        if(i==n) return 0;
        if(dp[i][previ+1]!=-1) return dp[i][previ+1];
        int len=0+solve(i+1,previ, nums,dp, n);
        if(previ==-1||nums[i]>nums[previ]){
            len=max(len,1+solve(i+1,i,nums,dp,n));
        }
        return dp[i][previ+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i=n-1;i>=0;i--){
            for(int previ=i-1;previ>=-1;previ--){
                int len=0+dp[i+1][previ+1];
                if(previ==-1||nums[i]>nums[previ]){
                len=max(len,1+dp[i+1][i+1]);
                }
                dp[i][previ+1]=len;
            }
        }
        return dp[0][-1+1];
        
    }
};