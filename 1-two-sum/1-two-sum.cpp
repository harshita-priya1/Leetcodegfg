class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=0;j<n;j++){
                s=nums[i]+nums[j];
                if(i!=j && s==target){
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                    
                }
            }
        }
        return v;
    }
};