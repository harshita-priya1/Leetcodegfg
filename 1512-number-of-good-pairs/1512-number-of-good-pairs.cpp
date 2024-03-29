class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                m[nums[i]]=1;
            }
            else m[nums[i]]++;
        }
        int n=0;
        for(auto it: m){
            if(it.second>1){
                n+=it.second*(it.second-1)/2;
            }
        }
        return n;
    }
};