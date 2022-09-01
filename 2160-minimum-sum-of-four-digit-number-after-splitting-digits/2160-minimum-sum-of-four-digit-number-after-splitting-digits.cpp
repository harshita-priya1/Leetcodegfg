class Solution {
public:
    int minimumSum(int num) {
        vector<int> a(4,0);
        int n1=0;
        for(int i=0;i<4;i++){
            a[i]=num%10;
            num=num/10;
        }
        sort(a.begin(),a.end());
        int n2=0;
        n1=n1*10 +a[0];
        n2=n2*10 +a[1];
        n1=n1*10 +a[2];
        n2=n2*10 +a[3];
        return n1+n2;
    }
};