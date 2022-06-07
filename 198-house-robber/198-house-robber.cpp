class Solution {
public:
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector <int>dp(n+2,-1);
        dp[n]=0;
        dp[n+1]=0;
        for(int i=n-1;i>=0;i--){
            int sum1=dp[i+1];
            int sum2=nums[i]+dp[i+2];
            dp[i]=max(sum1,sum2);
        }
        return dp[0];
        
    }
};