class Solution {
public:
    void charComb(string &digits,vector<string>&str, string s,vector<string> &ans,int i){
        if(i==digits.size()){
            ans.push_back(s);
            return;
        }
        for(int j=0;j<str[digits[i]-'0'].size();j++){
            charComb(digits,str,s+str[digits[i]-'0'][j],ans,i+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        vector<string> str{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string s;
        if(digits.size()==0)return ans;
        charComb(digits,str,s,ans,0);
        return ans;
    }
};