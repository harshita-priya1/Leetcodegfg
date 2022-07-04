class Solution {
public:
    vector<int> generate(int numRows) {
        vector<vector<int>> a(numRows);

        for (int i = 0; i < numRows; i++) {
            a[i].resize(i + 1);
            a[i][0] = 1;
            a[i][i] = 1;
            for (int j = 1; j < i; j++)
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
        
        return a[numRows-1];
    }
    vector<int> getRow(int rowIndex) {
        return generate(rowIndex+1);
    }
};