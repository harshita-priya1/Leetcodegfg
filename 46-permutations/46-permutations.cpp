class Solution {
public:
    void solve(vector<int> nums, vector<vector<int>>& ans, vector<int> p, int i){
        if(p.size()==nums.size()){
            ans.push_back(p);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            p.push_back(nums[i]);
            solve(nums,ans,p,i+1);
            p.pop_back();
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> p;
        solve(nums,ans,p,0);
        return ans;
    }
};