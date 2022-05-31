class Solution {
public:

    
    int climbStairs(int n) {
        int i_0;
        int i_2=1;
        int i_1=1;
        if(n<2)return 1;
        for(int i=2;i<=n;i++){
            i_0=i_1+i_2;
            i_2=i_1;
            i_1=i_0;
        }
        return i_1;
    }
};