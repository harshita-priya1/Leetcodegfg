class Solution {
public:
    void solve(vector<char>& s,int l,int r){
        if(l>=r) return;
        swap(s[l++],s[r--]);
        solve(s,l,r);
    }
    
    void reverseString(vector<char>& s) {
        solve(s,0,s.size()-1);
    }
};