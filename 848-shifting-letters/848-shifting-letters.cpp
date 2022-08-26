class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int t=0;
        for(int i= shifts.size()-1;i>=0;i--){
            t=(t+shifts[i])%26;
            s[i]='a'+((s[i]-'a'+t)%26); 
        }
        return s;
    }
};