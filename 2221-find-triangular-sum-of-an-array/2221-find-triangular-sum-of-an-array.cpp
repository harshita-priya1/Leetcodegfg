class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            vector<int>n1(i);
            for(int j=0;j<i;j++){
                n1[j]=(nums[j]+nums[j+1])%10;
            }
            nums.clear();
            for(int k=0;k<i;k++){
                nums.push_back(n1[k]);
            }
        }
        return nums[0];
    }
};