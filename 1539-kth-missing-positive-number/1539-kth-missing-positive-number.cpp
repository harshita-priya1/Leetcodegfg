class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0;
        int h=arr.size();
        int mid;
        while(l<h){
            mid=(h-l)/2 +l;
            if(arr[mid]==mid+1)l=mid+1;
            else{
                if(arr[mid]-(mid+1)<k)l=mid+1;
                else h=mid;  
                }
            }
        return h+k;
            
        }
    
};