class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string w;
        while (ss >> w) words.push_back(w);
        if (words.size() != pattern.size()) return false;
        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;
        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            if (p2w.count(c) && p2w[c] != words[i]) return false;
            if (w2p.count(words[i]) && w2p[words[i]] != c) return false;
            p2w[c] = words[i];
            w2p[words[i]] = c;
        }
        return true;        
    }
};