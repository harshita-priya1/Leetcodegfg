class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        int temp;
        int count = 0;
        for(int  i= 0;i<n;i++){
            if(count==0){
                count++;
                temp = nums[i];
            }
            else if(count<3){
                if(temp==nums[i]) count++;
                else return temp;    
            }
            if(count==3) count=0;
        }
        return temp;
    }
};