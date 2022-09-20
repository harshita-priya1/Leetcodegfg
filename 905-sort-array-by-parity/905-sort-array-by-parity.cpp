class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> ae,ao;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) ae.push_back(nums[i]);
            else ao.push_back(nums[i]);
        }
        int m=ae.size();
        for(int i=0;i<m;i++){
            nums[i]=ae[i];
        } 
        for(int i=0;i<n-m;i++){
            nums[m+i]=ao[i];
        } 
        return nums;
    }
};