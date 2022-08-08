class Solution {
public:
    bool wordPattern(string pat, string s) {
        map<char, int> pi;
        map<string, int> wi;
        istringstream in(s);
        int j = 0, n = pat.size();
        for (string w; in >> w; ++j) {
            if (j == n || pi[pat[j]] != wi[w])
                return false;
            pi[pat[j]] = wi[w] = j + 1;
        }
        return j == n;
    }
};