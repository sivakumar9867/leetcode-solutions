class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt[101] = {0};
        int ans = 0;
        for (int x : nums) {
            ans += cnt[x];
            cnt[x]++;
        }
        return ans;        
    }
};