class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int m=nums[0];
        for(int i=1;i<nums.size();i++){
            if(abs(m)>abs(nums[i])) m=nums[i];
            else if(abs(m)==abs(nums[i])) m=max(m,nums[i]);
        }
        return m;
    }
};