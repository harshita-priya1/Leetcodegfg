class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int a1=-1;
        int a2=-1;
        int l=0;
        int h=nums.size()-1;
        int mid;
        
        while(l<=h){
            mid=(h-l)/2 +l;
            if(nums[mid]==target){
                a1=mid;
                h=mid-1;
            }
            else if(nums[mid]<target)l=mid+1;
            else if(nums[mid]>target)h=mid-1;
        }
        l=0;
        h=nums.size()-1;
        while(l<=h){
            mid=(h-l)/2 +l;
            if(nums[mid]==target){
                a2=mid;
                l=mid+1;
                }
            
            else if(nums[mid]<target)l=mid+1;
            else if(nums[mid]>target)h=mid-1;
        }
        ans.push_back(a1);
        ans.push_back(a2);
        return ans;
    }
};