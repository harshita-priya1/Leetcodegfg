class Solution {
public:
    void solve(int i, int tgt, vector<int>& cts, vector<vector<int>>& ans,vector<int>com){
        if(i>=cts.size()){
            if(tgt==0){
                ans.push_back(com);
            }
            return;
        }
        if(tgt==0){
            ans.push_back(com);
            return;
        }
        if(cts[i]<=tgt){
            com.push_back(cts[i]);
            solve(i,tgt-cts[i],cts,ans,com);
            com.pop_back();
        }
        solve(i+1,tgt,cts,ans,com);
        
    }
    vector<vector<int>> combinationSum(vector<int>& cts, int tgt) {
        vector<vector<int>> ans;
        vector<int>com;
        solve(0,tgt,cts,ans,com);
        return ans;
    }
};