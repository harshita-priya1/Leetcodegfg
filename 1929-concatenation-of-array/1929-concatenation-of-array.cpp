class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> num(2*nums.size());
        for(int i=0;i<nums.size();i++){
            num[i]=nums[i];
            num[i+nums.size()]=nums[i];
        }
        return num;
    }
};