class Solution {
public:
    void moveZeroes(vector<int>& n) {
        int j=0,i=0;
        while(j<n.size() && i<n.size()){
            if(n[j]!=0){
                while(j<n.size()-1 && n[j]!=0){
                    j++;
                }
            }
            if(n[i]!=0){
                if(j<i){
                    swap(n[j],n[i]);
                    i++;
                }
                else i++;
            }
            else{
                i++;
            }
        }
        
    }
};