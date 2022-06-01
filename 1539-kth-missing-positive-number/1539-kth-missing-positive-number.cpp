class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0;
        int h=arr.size();
        int m;
        while(l<h){
            m=(h-l)/2 +l;
            if(arr[m]==m+1)l=m+1;
            else{
                if(arr[m]-(m+1)<k)l=m+1;
                else h=m;  
                }
            }
        return h+k;
            
        }
    
};