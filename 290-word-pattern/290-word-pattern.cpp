class Solution {
public:
    bool wordPattern(string pat, string s) {
        map<char, int> pi;
        map<string, int> wi;
        istringstream in(s);
        int i = 0, n = pat.size();
        for (string w; in >> w; ++i) {
            if (i == n || pi[pat[i]] != wi[w])
                return false;
            pi[pat[i]] = wi[w] = i + 1;
        }
        return i == n;
    }
};