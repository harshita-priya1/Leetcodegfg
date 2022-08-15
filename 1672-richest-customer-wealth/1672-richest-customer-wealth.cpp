class Solution {
public:
    int maximumWealth(vector<vector<int>>& acs) {
        int maxsum=0,m=acs.size(),n=acs[0].size();
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
               sum+=acs[i][j]; 
            }
            maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};