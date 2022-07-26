class Solution {
public:
    int finalValueAfterOperations(vector<string>& ops) {
        int x=0;
        for(int i=0;i<ops.size();i++){
            if(ops[i][1]=='+') x++;
            else x--;
        }
        return x;
    }
};