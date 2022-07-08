// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int solve(int coins[], vector<vector<int>> &dp, int v, int i){
	    if(i<0) return 1e9;
	    if(v==0) return 0;
	    int t,nt;
	    if(dp[i][v]!=-1) return dp[i][v];
	    if(coins[i]<=v) t=1+solve(coins,dp,v-coins[i],i);
	    else{
	        t= 1e9;
	    }
	    nt= solve(coins,dp,v,i-1);
	    return dp[i][v]=min(t,nt);
	    
	}
	int minCoins(int coins[], int m, int v) 
	{ 
	    if(m==1){
	        if(v%coins[0]==0) return v/coins[0];
	        else return -1;
	    }
	    vector<vector<int>> dp(m+1,vector<int>(v+1,0));
	    for(int i=0;i<=v;i++){
	        dp[0][i]=1e9;
	    }
	    for(int i=0;i<m+1;i++){
	        dp[i][0]=0;
	    }
	    for(int i=1;i<=m;i++){
	        for(int j=1;j<=v;j++){
	            int t,nt;
	            if(coins[i-1]<=j) t=1+dp[i][j-coins[i-1]];
        	    else{
        	        t= 1e9;
        	    }
        	    nt= dp[i-1][j];
        	    dp[i][j]=min(t,nt);
	        }
	    }
	    int ans=dp[m][v];
	    if(ans==1e9) return -1;
	    return ans;
	    
	    // Your code goes here
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends