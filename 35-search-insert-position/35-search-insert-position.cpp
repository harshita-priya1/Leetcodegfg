class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid,l=0;
        int h= nums.size()-1;
        while(l<=h){
            mid=l+((h-l)/2);
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return l;
    }
};