class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int i=0;
        int k=0,t=0;
        while(i<s.size()+3){
            if(s[i]=='0' && s[i+1]=='1'){
                s[i]='1';
                s[i+1]='0';
                i+=2;
                k++;
            }
            else{
                i++;
            }
            if(i>=s.size()-1){
                if(k==0) break;
                else{
                    i=0;
                    k=0;
                } 
                t++;
            }
        }
        return t;
    }
};