class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        vector<int> res(a.size());
        int l = 0, r = a.size() - 1;
        for (int k = a.size() - 1; k >= 0; k--) {
            if (abs(a[r]) > abs(a[l])) res[k] = a[r] * a[r--];
            else res[k] = a[l] * a[l++];
        }
        return res;
    }
};