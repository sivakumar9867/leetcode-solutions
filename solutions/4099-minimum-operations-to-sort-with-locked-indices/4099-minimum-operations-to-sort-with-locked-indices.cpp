class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
        int n = nums.size();
        int need = 0;
        int prefixMax = 0;
        for (int i = 0; i < n; i++) {
            prefixMax = max(prefixMax, nums[i]);

            if (locked[i] == 1) {
                if (nums[i] != i + 1 || prefixMax != i + 1) {
                    need++;
                }
            }
        }
        if (need > k) {
            return -1;
        }
        vector<int> bit(n + 1, 0);
        auto query = [&](int idx) {
            int sum = 0;
            while (idx > 0) {
                sum += bit[idx];
                idx -= idx & -idx;
            }
            return sum;
        };

        auto update = [&](int idx) {
            while (idx <= n) {
                bit[idx]++;
                idx += idx & -idx;
            }
        };
        long long inversions = 0;
        for (int i = n - 1; i >= 0; i--) {
            inversions += query(nums[i] - 1);
            update(nums[i]);
        }
        return (int)(inversions + need);
    }
};