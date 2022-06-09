class Solution {
public:
    string convert(string s, int numRows) {
        string sans="";
        int i=0;
        int n=s.size();
        vector<string>ans(numRows,"");
        while(i<n){
            for(int j=0;j<numRows&&i<n;j++){
                ans[j].push_back(s[i++]);
            }
            for(int j=numRows-2;j>=1&&i<n;j--){
                ans[j].push_back(s[i++]);
            }
        }
        for(auto i:ans){
            sans+=i;
        }
        return sans;
        
    }
};