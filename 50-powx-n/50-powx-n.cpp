class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long n0=n;
        if(n==0) return (double)1.00;
        if(n0<0) n0=(long long)-1*n0;
        while(n0){
            if(n0%2){
                ans*=x;
                n0--;
            }
            else{
                x*=x;
                n0/=2;
            }
        }
        if(n<0) ans= (double)1.00/(double)(ans);
        return ans;
    }
};