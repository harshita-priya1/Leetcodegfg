class Solution {
public:
    void solve(string &s, int i, int j){
        while(i<j){
            swap(s[i++], s[j--]);
        }
    }
    
    string reverseStr(string s, int k) {
            int n=s.size();
            for(int i=0;i<n; ){
                if(i+2*k<n){
                    solve(s,i,i+k-1);
                    i=i+ 2*k;
                }
                else if(i+k<n){
                    solve(s,i,i+k-1);
                    return s;
                }
                else{
                    solve(s,i,n-1);
                    return s;
                }
            }
            return s;
        }
    
};