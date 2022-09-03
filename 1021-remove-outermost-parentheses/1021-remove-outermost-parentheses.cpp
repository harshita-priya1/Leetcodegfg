class Solution {
public:
    string removeOuterParentheses(string s) {
        stack <char> st;
        int n=s.size(),i=0;
        string str, temp;
        while(i<n){
            char c=s[i++];
            if(c=='('){
                st.push(c);
                temp.push_back(c);
            }
            else{
                st.pop();
                temp.push_back(c);
            }
            if(st.empty()){
                str+=temp.substr(1,temp.size()-2);
                temp="";
            }
        }
        return str;
    }
};