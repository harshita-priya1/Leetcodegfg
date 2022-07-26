class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int m=nums[0],ind=0;
        for(int i=1;i<nums.size();i++){
            m=max(m,nums[i]);
            if(m==nums[i]) ind=i;
        }
        for(int i=0;i<nums.size();i++){
            if(i==ind) continue;
            if(m<2*nums[i]) return -1;
        }
        return ind;
    }
};