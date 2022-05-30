class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt =0;
        int n1=arr1.size();
        int n2=arr2.size();
        int flag;
        for(int i=0;i<n1;i++){
            flag=1;
            for(int j =0;j<n2;j++){
                
                if(abs(arr1[i]-arr2[j])<=d){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                cnt++;
            }
        }
        return cnt;
    }
};