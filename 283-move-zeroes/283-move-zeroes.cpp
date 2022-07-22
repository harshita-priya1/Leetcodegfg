class Solution {
public:
    void moveZeroes(vector<int>& n) {
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < n.size(); i++) {
            if (n[i] != 0) {
                n[j++] = n[i];
            }
        }
        for (;j < n.size(); j++) {
            n[j] = 0;
        }
        
    }
};