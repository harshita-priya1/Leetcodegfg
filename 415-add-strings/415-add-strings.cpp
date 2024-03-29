class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1,j=num2.size()-1;
        int s=0;
        string ans="";
        while( i>=0 || j>=0 || s ){
             long sum=0;
             if(i>=0){
                sum+=(num1[i]-'0');
                i--;
             }
             if(j>=0){
                sum+=(num2[j]-'0');
                j--;
             }
             sum+=s;
             s=sum/10;
             sum=sum%10;
             ans =  ans + to_string(sum);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};