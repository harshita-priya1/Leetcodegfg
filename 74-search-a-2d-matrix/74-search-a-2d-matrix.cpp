class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int n=mat.size();
        int m = mat[0].size();
        int l=0,r=(m*n)-1;
        while(l<=r){
            int mid=l + ((r-l)/2);
            int i= mat[mid/m][mid%m];
            if(i>t){
                r=mid-1;
            }
            else if(i<t){
                l=mid+1;
            }
            else return true;
        }
        return false;
        //if(mat[a][b]==t || mat[a][b-1]==t || mat[x][y]==t || mat[x][y+1]==t)
        //    return true;
        //else return false;
    }
};