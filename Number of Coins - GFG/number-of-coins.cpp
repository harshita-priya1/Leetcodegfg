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
	    
	    vector<vector<int>> dp(m,vector<int>(v+1,-1));
	    int ans=solve(coins,dp,v,m-1);
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