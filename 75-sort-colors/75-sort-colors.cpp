class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int n0=0,n1=0,n2=0;
        for(auto i: nums){
            if(i==0) n0++;
            else if(i==1) n1++;
            else n2++;
        }
        nums.clear();
        for(int i=0;i<n0;i++){
            nums.push_back(0);
        }
        for(int i=0;i<n1;i++){
            nums.push_back(1);
        }
        for(int i=0;i<n2;i++){
            nums.push_back(2);
        }
    }
};