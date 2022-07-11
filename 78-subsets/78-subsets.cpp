class Solution {
public:
    void solve(int i,int n,vector<int>& nums,vector<vector<int>>& ans,vector<int>& s){
        if(i==n){
            ans.push_back(s);
            return;
        }
        s.push_back(nums[i]);
        solve(i+1,n,nums,ans,s);
        s.pop_back();
        solve(i+1,n,nums,ans,s);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        vector<int>s;
        solve(0,n,nums,ans,s);
        return ans;
    }
};