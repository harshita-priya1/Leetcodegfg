class Solution {
public:
    bool isPal(string s, int i, int j){
        while(i <= j) {
            if(s[i++] != s[j--])
                return false;
        }
        return true;
    }
    void solve(string s, vector<vector<string>>& ans, vector<string>& s1, int ind){
        if(ind==s.size()){
            ans.push_back(s1);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(isPal(s,ind,i)){
                s1.push_back(s.substr(ind,i-ind+1));
                solve(s,ans,s1,i+1);
                s1.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>s1;
        vector<vector<string>>ans;
        solve(s,ans,s1,0);
        return ans;
        
    }
};