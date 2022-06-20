class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        int temp;
        int count=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(count==0){
                temp=nums[i];
                count++;
            }
            else if(count<2){
                if(temp==nums[i]) count++;
                else{
                    ans.push_back(temp);
                    count=1;
                    temp=nums[i];
                }
            }
            if(count==2) count=0;
        }
        if(count==1) ans.push_back(nums[n-1]);
        return ans;
    }
};