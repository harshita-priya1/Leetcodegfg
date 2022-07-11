class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int> p,vector<int> mark){
        if(p.size()==nums.size()){
            ans.push_back(p);
            return;
        }
        for(int j=0;j<nums.size();j++){
            if(mark[j]==0){
                p.push_back(nums[j]);
                mark[j]=1;
                solve(nums,ans,p,mark);
                p.pop_back();
                mark[j]=0;
                }
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> p;
        vector <int> mark(nums.size(),0);
        solve(nums,ans,p,mark);
        return ans;
    }
};