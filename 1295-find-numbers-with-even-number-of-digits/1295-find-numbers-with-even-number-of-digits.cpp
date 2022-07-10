class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int x=nums.size();
        int n=0,flag=0;
        for(int i=0;i<x;i++){
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                n++;
            }
            if(n%2==0) flag++;
            n=0;
        }
        return flag;
    }
};