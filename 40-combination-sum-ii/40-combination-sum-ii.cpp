class Solution {
public:
    void solve(int i, int tgt, vector<int>& cts, vector<vector<int>>& ans,vector<int>&com){
        if(tgt==0){
            ans.push_back(com);
            return;
        }
        for(int j=i;j<cts.size();j++){
            if(j>i && cts[j]==cts[j-1]) continue;
            if(cts[j]>tgt) break;
            com.push_back(cts[j]);
            solve(j+1,tgt-cts[j],cts,ans,com);
            com.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& cts, int tgt) {
        sort(cts.begin(),cts.end());
        vector<vector<int>> ans;
        vector<int>com;
        solve(0,tgt,cts,ans,com);
        return ans;
    }
};