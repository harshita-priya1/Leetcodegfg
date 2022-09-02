class Solution {
public:
    int solve(int i,vector<int>& arr,vector<int>&dp, int k,int n){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int len =0, maxi=INT_MIN, maxans=INT_MIN;
        for(int j=i;j<min(i+k,n);j++){
            len++;
            maxi=max(maxi,arr[j]);
            int sum=len*maxi + solve(j+1,arr,dp,k,n);
            maxans=max(sum,maxans);
        }
        return dp[i]=maxans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int>dp(arr.size(),-1);
        return solve(0,arr,dp,k,arr.size());
    }
};