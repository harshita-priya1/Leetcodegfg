class Solution {
public:
    bool canFill(int j,int i,vector<string>& board, int n){
        for(int x=0;x<n;x++){
            if(board[i][x]=='Q') return false;
        }
        for(int x=0;x<n;x++){
            if(board[x][j]=='Q') return false;
        }
        int row=i,col=j;
        while(row<n&&col<n){
            if(board[row][col]=='Q') return false;
            row++;
            col++;
        }
        row=i,col=j;
        while(row>=0&&col>=0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=i,col=j;
        while(row>=0&&col<n){
            if(board[row][col]=='Q') return false;
            row--;
            col++;
        }
        row=i,col=j;
        while(row<n&&col>=0){
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        
        return true;
    }
    void solve(vector<vector<string>>& ans, vector<string>& board, int col, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(canFill(col,row,board,n)){
                board[row][col]='Q';
                solve(ans,board,col+1,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string ro(n,'.');
        vector<string>board(n,ro);
        solve(ans,board,0,n);
        return ans;
    }
};