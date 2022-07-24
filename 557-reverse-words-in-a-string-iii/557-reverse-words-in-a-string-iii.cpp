class Solution {
public:
    void revstr(string& s,int i, int j) {
        while(i < j){
            swap(s[i++], s[j--]); 
        }
    }
    string reverseWords(string s) {
        int i=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==' '){
                revstr(s,i,j-1);
                i=j+1;
            }
        }
        revstr(s,i,s.size()-1);
        return s;
    }
};