class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++){
            for(int j=1;j<arr.size();j++){
                if((arr[i]==2*arr[j]||arr[j]==2*arr[i])&&j!=i)return true;
            }
        }
        return false;
    }
};