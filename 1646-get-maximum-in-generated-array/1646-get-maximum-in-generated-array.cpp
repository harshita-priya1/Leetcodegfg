class Solution {
public:
    int getMaximumGenerated(int n) {
        int a[n+1],m=1;
        if(n==0) return 0;
        a[0]=0;
        a[1]=1;
        for(int i=2;i<=n;i++){
            if(i%2==0) a[i]=a[i/2];
            else a[i]=a[(i-1)/2]+a[((i-1)/2)+1];
            m=max(m,a[i]);
        }
        return m;
    }
};