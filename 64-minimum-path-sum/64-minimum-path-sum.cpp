class Solution {
public:
    int solve(int i, int j,int ans,vector<vector<int>>& grid, vector<vector<int>>&dp){
        
        if(i<0||j<0)return 10e5;
        if(i==0&&j==0)return grid[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int ans1=solve(i-1,j,ans1,grid,dp)+grid[i][j];
        int ans2=solve(i,j-1,ans1,grid,dp)+grid[i][j];
        return dp[i][j]=min(ans2,ans1);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(m-1,n-1,ans,grid,dp);
    }
};