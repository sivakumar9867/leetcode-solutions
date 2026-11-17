class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int n = nums.size();
        int i = 0;
        while (i < n) {
            int start = nums[i];
            while (i + 1 < n && (long long)nums[i + 1] == (long long)nums[i] + 1) i++;
            if (start == nums[i]) res.push_back(to_string(start));
            else res.push_back(to_string(start) + "->" + to_string(nums[i]));
            i++;
        }
        return res;       
        
    }
};