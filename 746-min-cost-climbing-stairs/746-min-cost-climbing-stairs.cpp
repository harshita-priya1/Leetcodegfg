class Solution {
public:
    int cSt(vector<int>&dp,vector<int>& cost,int i){
        if(i>=cost.size())return 0;
        if(dp[i]!=-1)return dp[i];
        int c1=cSt(dp,cost,i+1)+cost[i];
        int c2=cSt(dp,cost,i+2)+cost[i];
        return dp[i]=min(c1,c2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1,-1);
        int n=cost.size();
        int ans1=cSt(dp,cost,0);
        for(int i=0;i<n;i++){
            cout<<dp[i]<<" ";
        }
        int ans2=cSt(dp,cost,1);
        for(int i=0;i<n;i++){
            cout<<dp[i]<<" ";
        }
        return min(ans1,ans2);
    }
};