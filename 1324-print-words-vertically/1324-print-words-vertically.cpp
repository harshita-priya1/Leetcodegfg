class Solution {
public:
    vector<string> printVertically(string s) {
        s+=' ';
        int n=s.length();
        int maxlen=0;
        int len=0;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                maxlen=max(maxlen,len);
                len=0;
            }
            else len++;
        }
        vector <string> words;
        string s1="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                for(int j=s1.length();j<maxlen;j++){
                    s1+='_';
                }
                words.push_back(s1);
                s1="";
            }
            else s1+=s[i];
        }
        vector<string>ans(maxlen);
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[0].length();j++){
                if(words[i][j]=='_') ans[j]+=' ';
                else ans[j]+=words[i][j];
            }
        }
        for(int i=0;i<ans.size();i++){
            for(int j=ans[i].size()-1;j>=0;j--){
                if(ans[i][j]!=' '){ 
                    ans[i].erase(j+1);
                    cout<<j<<" ";
                    break;
                }
            }
        }
        return ans;
    }
};