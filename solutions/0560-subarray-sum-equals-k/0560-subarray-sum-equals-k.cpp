class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
                unordered_map<int, int> cnt;
        cnt[0] = 1;
        int sum = 0, res = 0;
        for (int x : nums) {
            sum += x;
            auto it = cnt.find(sum - k);
            if (it != cnt.end()) res += it->second;
            cnt[sum]++;
        }
        return res;
        
    }
};