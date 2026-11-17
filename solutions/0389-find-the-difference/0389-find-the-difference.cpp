class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> result;
        for(char c:s){
            result[c]++;
        }
        for(char c:t)
        {
            if(result[c]==0){
                return c;
            }
            result[c]--;
        }
        return ' ';
    }
};