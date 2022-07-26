class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        for(int i = 0; i<n; i++){
            mp[nums[i]].push_back(i);
        }
        
        
        for(auto x : mp){
            int m = x.second.size();
            if(m >= 2){
                for(int i = 0; i<m; i++){
                    for(int j = 0; j<m ; j++){
                        if( j == i ) continue;
                        if(abs(x.second[i] - x.second[j]) <= k) return true;
                    }
                }
            }
        }
        return false;
    }
};