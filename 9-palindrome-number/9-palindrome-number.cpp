class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        long n1=0;
        while(n>0){
            n1=(n1*10)+(n%10);
            n=n/10;
        }
        if(x== n1) return true;
        return false;
    }
};