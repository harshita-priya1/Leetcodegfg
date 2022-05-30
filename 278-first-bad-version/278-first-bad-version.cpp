// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1,h=n,mid;
        while(l<=h){
            mid=(h-l)/2 +l;
            if(isBadVersion(mid)){
                if(isBadVersion(mid-1)&&mid>0)h=mid-1;
                else return mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};