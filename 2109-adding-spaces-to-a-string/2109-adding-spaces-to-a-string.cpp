class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int k=0,j=0;
        for(auto i:s){
            if(j<spaces.size()&&k==spaces[j]){
                ans+=' ';
                j++;
            }
            ans+=i;
            k++;
        }
        return ans;
    }
};