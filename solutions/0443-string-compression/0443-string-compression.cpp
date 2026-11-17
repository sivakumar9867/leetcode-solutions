class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int w = 0, i = 0;
        while (i < n) {
            char c = chars[i];
            int j = i;
            while (j < n && chars[j] == c) j++;
            int cnt = j - i;
            chars[w++] = c;
            if (cnt > 1) {
                string s = to_string(cnt);
                for (char d : s) chars[w++] = d;
            }
            i = j;
        }
        return w;

        
    }
};