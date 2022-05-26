class Solution {
public:
    int mySqrt(int x) {
        int i=1;
        int flag=0;
        while(x>0){
            x-=i;
            if(x<0)continue;
            flag++;
            i+=2;
        }
        return flag;
    }
};