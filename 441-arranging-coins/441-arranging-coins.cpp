class Solution {
public:
    int arrangeCoins(int n) {
        long int i,cnt=0;
        for(i=1;i*(i+1)/2<=n;i++){
           cnt++; 
        }
        return cnt;
    }
};