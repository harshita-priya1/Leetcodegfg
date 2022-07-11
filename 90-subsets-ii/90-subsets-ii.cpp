class Solution {
public:
    void solve(int ind,int n,vector<int>&nums,vector<vector<int>>&ans,vector<int>&s){
        ans.push_back(s);
        for(int i=ind;i<n;i++){
            if(i!=ind&&nums[i]==nums[i-1]) continue;
            s.push_back(nums[i]);
            solve(i+1,n,nums,ans,s);
            s.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        vector<vector<int>>ans;
        vector<int> s;
        solve(0,n,nums,ans,s);
        return ans;
    }
};